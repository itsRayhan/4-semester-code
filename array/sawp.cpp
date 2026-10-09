if (arr[j] > arr[j + 1])
{
    swap(arr[j], arr[j + 1]);

    // or

    int temp = arr[j];
    arr[j] = arr[j + 1];
    arr[j + 1] = temp;
}