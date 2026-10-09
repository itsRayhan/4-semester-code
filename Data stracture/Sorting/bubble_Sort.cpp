#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {54, 68, 1, 68, 1, 87, 1, 87, 68, 68};
 
    /*int n  ;
    cout<< "please enter your array";
    cin>> n;
    int arr[n];*/

    //array size auto input;
    int n = sizeof(arr) / sizeof(arr[0]); 

    // bubble sorting;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // swap(arr[j], arr[j+1]);

                // or

                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}