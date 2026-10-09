#include <bits/stdc++.h>
using namespace std;

int infun(int arr[], int size, int index)
{
    if (index < 0 || index >= size)
    {
        throw " error : found";
    }
    return arr[index];
}

int main()
{

    int arr[] = {60, 50, 30, 80, 904, 01, 03};
    int size = 7;
    int index;
    cout << "please initialize the number: ";
    cin >> index;

    try
    {
        int result = infun(arr, size, index);
        cout << "programm successfully worked : " << result;
    }
    catch (const char *mng)
    {
        cout << "again try please !" << mng;
    }
    return 0;
}