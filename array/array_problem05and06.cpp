#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 0, 5, 6, 7, 23, 556, 76};
    int maximum = arr[0];
    int min = arr[0];
    for (int x : arr)
    {
        cout << "," << x << endl;
        if (x > maximum)
            maximum = x;

        if (x < min)
            min = x;
    }
    cout << "bit amount=" << maximum << endl;
    cout << "less amount=" << min << endl;

    return 0;
}