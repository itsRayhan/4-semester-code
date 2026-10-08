from django.urls import path
from . import views

urlpatterns = [
    path('register/', views.register_view, name='register'),
    path('login/', views.login_view, name='login'),
    path('logout/', views.logout_view, name='logout'),

    path('lost/', views.lost_items, name='lost_items'),
    path('found/', views.found_items, name='found_items'),

    path(
        'smart-match/',
        views.smart_match,
        name='smart_match'
    ),

    path(
        'item/<int:item_id>/',
        views.item_detail,
        name='item_detail'
    ),

    path(
        'item/<int:item_id>/claim/',
        views.claim_item,
        name='claim_item'
    ),
    path(
    'claim-requests/',
    views.claim_requests,
    name='claim_requests'
    ),
]