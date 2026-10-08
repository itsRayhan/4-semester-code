from django.db import models
from django.contrib.auth.models import User


class Item(models.Model):

    ITEM_TYPE_CHOICES = [
        ('lost', 'Lost'),
        ('found', 'Found'),
    ]

    STATUS_CHOICES = [
        ('active', 'Active'),
        ('claimed', 'Claimed'),
        ('returned', 'Returned'),
    ]

    title = models.CharField(max_length=200)

    item_type = models.CharField(
        max_length=10,
        choices=ITEM_TYPE_CHOICES
    )

    category = models.CharField(max_length=100)

    description = models.TextField()

    location = models.CharField(max_length=200)

    date = models.DateField()

    image = models.ImageField(
        upload_to='items/',
        blank=True,
        null=True
    )

    contact = models.CharField(max_length=100)

    status = models.CharField(
        max_length=10,
        choices=STATUS_CHOICES,
        default='active'
    )

    posted_by = models.ForeignKey(
        User,
        on_delete=models.CASCADE
    )

    created_at = models.DateTimeField(auto_now_add=True)

    def __str__(self):
        return self.title


class ClaimRequest(models.Model):

    item = models.ForeignKey(
        Item,
        on_delete=models.CASCADE,
        related_name='claim_requests'
    )

    claimant = models.ForeignKey(
        User,
        on_delete=models.CASCADE
    )

    message = models.TextField()

    status = models.CharField(
        max_length=20,
        choices=[
            ('pending', 'Pending'),
            ('accepted', 'Accepted'),
            ('rejected', 'Rejected'),
        ],
        default='pending'
    )

    created_at = models.DateTimeField(
        auto_now_add=True
    )

    def __str__(self):
        return f"{self.claimant.username} - {self.item.title}"