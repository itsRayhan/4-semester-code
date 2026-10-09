#include <bits/stdc++.h>
using namespace std;

double eh(double a, double b)
{
    if (b == 0)
    {
        throw "error: somthing please valid ";
    }
    return (double)a / b;
}
int main()
{
    double x, y;
    cout << "enter x value= ";
    cin >> x;
    cout << "enter y value= ";
    cin >> y;
    try
    {
        double result = eh(x, y);
        cout << "output correctly = " << result;
    }
    catch (const char *msg)
    {
        cout << "try again " << msg;
    }
    return 0;
}