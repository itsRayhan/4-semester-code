#include <bits/stdc++.h>
using namespace std;

template <class T>
void swapdata(T &a, T &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 10, y = 20;
    swapdata(x, y);
    cout << "x= " << x << endl
         << "Y= " << y << endl;

    return 0;
}