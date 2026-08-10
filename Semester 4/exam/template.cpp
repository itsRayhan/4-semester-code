#include <bits/stdc++.h>
using namespace std;

template <typename t>
void swapvalue(t &a, t &b)
{
    t temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 10, y = 90;
    swapvalue(x, y);

    float f = 6.5, d = 5.6;
    swapvalue(f, d);

    double w = 73.498, h = 43.643;
    swapvalue(w, h);
    cout << "x= " << x << endl
         << "y= " << y<<endl;
    cout << "f= " << f << endl
         << "d= " << d << endl;
    cout << "w= " << w << endl
         << "h= " << h << endl;

    return 0;
}