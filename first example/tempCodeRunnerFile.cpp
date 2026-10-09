#include <bits/stdc++.h>
using namespace std;
// first and last element print
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 45};
    int n = sizeof(arr) / sizeof(arr[0]) - 1;
    for (int i = 0; i <= 1; i++)
    {
        cout << "first 2 index=" << arr[i] << endl;
    }
    cout << "last line=" << arr[n] << endl;
    return 0;