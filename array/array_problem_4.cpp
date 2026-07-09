#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    float sum = 0;

    for (int i : arr)
    {
        sum = sum + i;
    }
    cout << sum << "=" << endl;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout <<"h m values =" << n << endl;
    float avarage ;
    avarage = sum / n;
    cout << "avg=" << avarage << endl;

    return 0;
}