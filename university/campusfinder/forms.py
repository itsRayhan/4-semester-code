from django import forms
from .models import Item


class ItemForm(forms.ModelForm):

    class Meta:
        model = Item

        fields = [
            'title',
            'item_type',
            'category',
            'description',
            'location',
            'date',
            'image',
            'contact',
        ]

        widgets = {
            'date': forms.DateInput(
                attrs={'type': 'date'}
            ),

            'description': forms.Textarea(
                attrs={'rows': 4}
            ),
        }