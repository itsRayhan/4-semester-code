#include <iostream>
using namespace std;
int main()
{
    int n;
    int c,a=0, b = 1;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        c = a + b;
        cout << a << "+" << b << "=" << c << endl;
        a=b;
        b=c;
    }
    return 0;
}//done