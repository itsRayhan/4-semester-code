from django.shortcuts import render, redirect
from django.contrib.auth import authenticate, login, logout
from django.contrib.auth.models import User
from django.contrib.auth.decorators import login_required

from difflib import SequenceMatcher

from .forms import ItemForm
from .models import Item, ClaimRequest


def similarity(text1, text2):
    return SequenceMatcher(
        None,
        text1.lower(),
        text2.lower()
    ).ratio()


def home(request):

    latest_items = Item.objects.all().order_by('-created_at')[:10]

    return render(
        request,
        'campusfinder/home.html',
        {'latest_items': latest_items}
    )

@login_required
def report_item(request):

    if request.method == 'POST':
        form = ItemForm(request.POST, request.FILES)

        if form.is_valid():
            item = form.save(commit=False)
            item.posted_by = request.user
            item.save()

            return redirect('home')

    else:
        form = ItemForm()

    return render(
        request,
        'campusfinder/report_item.html',
        {'form': form}
    )


def register_view(request):

    if request.method == 'POST':

        username = request.POST.get('username')
        email = request.POST.get('email')
        password = request.POST.get('password')

        if User.objects.filter(username=username).exists():
            return render(
                request,
                'campusfinder/register.html',
                {'error': 'Username already exists.'}
            )

        user = User.objects.create_user(
            username=username,
            email=email,
            password=password
        )

        login(request, user)

        return redirect('home')

    return render(request, 'campusfinder/register.html')


def login_view(request):

    if request.method == 'POST':

        username = request.POST.get('username')
        password = request.POST.get('password')

        user = authenticate(
            request,
            username=username,
            password=password
        )

        if user is not None:
            login(request, user)
            return redirect('home')

        return render(
            request,
            'campusfinder/login.html',
            {'error': 'Invalid username or password.'}
        )

    return render(request, 'campusfinder/login.html')


def logout_view(request):

    logout(request)

    return redirect('home')


# LOST ITEMS

def lost_items(request):

    items = Item.objects.filter(
        item_type='lost'
    ).order_by('-created_at')

    return render(
        request,
        'campusfinder/lost_items.html',
        {'items': items}
    )


# FOUND ITEMS

def found_items(request):

    items = Item.objects.filter(
        item_type='found'
    ).order_by('-created_at')

    return render(
        request,
        'campusfinder/found_items.html',
        {'items': items}
    )
def calculate_match(lost_item, found_item):

    title_score = similarity(
        lost_item.title,
        found_item.title
    )

    description_score = similarity(
        lost_item.description,
        found_item.description
    )

    category_score = similarity(
        lost_item.category,
        found_item.category
    )

    location_score = similarity(
        lost_item.location,
        found_item.location
    )

    final_score = (
        title_score * 0.30 +
        description_score * 0.30 +
        category_score * 0.20 +
        location_score * 0.20
    )

    return round(final_score * 100, 2)
def smart_match(request):

    lost_items = Item.objects.filter(
        item_type='lost'
    )

    found_items = Item.objects.filter(
        item_type='found'
    )

    matches = []

    for lost_item in lost_items:

        for found_item in found_items:

            score = calculate_match(
                lost_item,
                found_item
            )

            if score >= 40:

                matches.append({
                    'lost_item': lost_item,
                    'found_item': found_item,
                    'score': score,
                })

    matches.sort(
        key=lambda x: x['score'],
        reverse=True
    )

    return render(
        request,
        'campusfinder/smart_match.html',
        {'matches': matches}
    )
def item_detail(request, item_id):

    item = Item.objects.get(id=item_id)

    return render(
        request,
        'campusfinder/item_detail.html',
        {'item': item}
    )
@login_required
def claim_item(request, item_id):

    item = Item.objects.get(id=item_id)

    if request.method == 'POST':

        message = request.POST.get('message')

        ClaimRequest.objects.create(
            item=item,
            claimant=request.user,
            message=message
        )

        return redirect('item_detail', item_id=item.id)

    return render(
        request,
        'campusfinder/claim_item.html',
        {'item': item}
    )
@login_required
def claim_requests(request):

    items = Item.objects.filter(
        posted_by=request.user,
        item_type='found'
    )

    requests = ClaimRequest.objects.filter(
        item__in=items
    ).order_by('-created_at')

    return render(
        request,
        'campusfinder/claim_requests.html',
        {'requests': requests}
    )