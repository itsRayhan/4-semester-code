from django.contrib import admin
from .models import Item, ClaimRequest


@admin.register(Item)
class ItemAdmin(admin.ModelAdmin):
    list_display = (
        'title',
        'item_type',
        'category',
        'location',
        'date',
        'status',
        'posted_by',
    )

    list_filter = (
        'item_type',
        'category',
        'status',
    )

    search_fields = (
        'title',
        'description',
        'location',
    )
    from .models import ClaimRequest


@admin.register(ClaimRequest)
class ClaimRequestAdmin(admin.ModelAdmin):

    list_display = (
        'item',
        'claimant',
        'status',
        'created_at',
    )

    list_filter = (
        'status',
    )

    search_fields = (
        'item__title',
        'claimant__username',
        'message',
    )