#include <bits/stdc++.h>
using namespace std;

double infun(double a)
{
    if (a < 0)
    {
        throw " error : found";
    }
    return sqrt(a);
}

int main()
{
    double x;
    cout << "please initialize the number: ";
    cin >> x;

    try
    {
        double result = infun(x);
        cout << "programm successfully worked : " << result;
    }
    catch (const char *mng)
    {
        cout << "again try please !" << mng;
    }
    return 0;
}