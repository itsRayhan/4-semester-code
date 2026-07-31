#include <bits/stdc++.h>
using namespace std;

double safeSqrt(double num)
{
    if (num < 0)
    {
        throw invalid_argument("Cannot compute negative number!");
    }
    return sqrt(num);
}

int main()
{
    double num;

    cout << "Enter a number: ";
    cin >> num;

    try
    {
        double result = safeSqrt(num);
        cout << "Square root: " << result << endl;
    }
    catch (const invalid_argument &e)
    {
        cout << "Error: " << e.what() << endl;
    }

    cout << "Program continues after handling the exception." << endl;

    return 0;
}