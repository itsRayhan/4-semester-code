#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Array উল্টো করে প্রিন্ট করো
    int arr[] = {1, 2, 3, 4, 5, 324, 54, 67, 84, 56, 7898, 7658};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << n << endl;
    int temp = 0;
    double reverse ;
    /*
    for (int i = n - 1; i > 0; i--)
    {
        cout  << arr[i]<<" ";
    }
        */
    for (int i = 0; i <= n; i++)
    {
        arr[i] = n;
        n = temp;
        reverse = arr[n];
        cout << reverse << " ";
    }

    return 0;
}