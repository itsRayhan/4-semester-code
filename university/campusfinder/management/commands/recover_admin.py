
from django.core.management.base import BaseCommand
from django.contrib.auth import get_user_model
import os


class Command(BaseCommand):
    help = "Recover the Django admin account"

    def handle(self, *args, **options):
        User = get_user_model()
        username = os.environ.get("RECOVERY_ADMIN_USERNAME")
        password = os.environ.get("RECOVERY_ADMIN_PASSWORD")

        if not username or not password:
            self.stderr.write("Recovery environment variables missing.")
            return

        user, created = User.objects.get_or_create(
            username=username,
            defaults={
                "is_staff": True,
                "is_superuser": True,
                "is_active": True,
            },
        )

        user.is_staff = True
        user.is_superuser = True
        user.is_active = True
        user.set_password(password)
        user.save()

        self.stdout.write(
            self.style.SUCCESS("Admin recovery completed.")
        )