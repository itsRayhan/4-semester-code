#include <bits/stdc++.h>
using namespace std;

double infun(double a, double b)
{
    if ( b == 0)
    {
        throw " error : found";
    }
    return (double)a / b;
}

int main()
{
    double x, y;
    cout << "please initialize the number: ";
    cin >> x >> y;

    try
    {
        double result = infun(x, y);
        cout << "programm successfully worked : " << result;
    }
    catch (const char *mng)
    {
        cout << "again try please !" << mng;
    }
    return 0;
}