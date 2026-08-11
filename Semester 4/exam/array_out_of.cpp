#include <bits/stdc++.h>
using namespace std;

int getfun(int arr[], int size, int index)
{
    if (index < 0 || index >= size)
    {
        throw "error: array out of bound";
    }
    return arr[index];
}
int main()
{
    int arr[] = {10, 60, 5, 04, 6, 0654, 3654};
    int size = 7;
    int index;
    cout << "enter index= ";
    cin >> index;
    try
    {
        int dx = getfun(arr, size, index);
        cout << dx;
    }
    catch (const char* badindex)
    {
        cout<< badindex<< "please return in this number "<<size-1;
    }

    return 0;
}