from django.contrib import admin
from django.urls import path, include
from django.conf import settings
from django.conf.urls.static import static

from campusfinder.views import home, report_item


urlpatterns = [
    path('admin/', admin.site.urls),

    path('', home, name='home'),
    path('report/', report_item, name='report_item'),

    path('', include('campusfinder.urls')),
]


urlpatterns += static(
    settings.MEDIA_URL,
    document_root=settings.MEDIA_ROOT
)