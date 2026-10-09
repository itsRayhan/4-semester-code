#include <bits/stdc++.h>
using namespace std;

double divide(double numerator, double denominator)
{
    if (denominator == 0)
    {
        throw runtime_error("Division by zero error!");
    }
    return numerator / denominator;
}

int main()
{
    double num, den;

    cout << "Enter numerator: ";
    cin >> num;
    cout << "Enter denominator: ";
    cin >> den;

    try
    {
        double result = divide(num, den);
        cout << "Result: " << result << endl;
    }
    catch (const runtime_error &e)
    {
        cout << "Error: " << e.what() << endl;
    }

    cout << "Program continues after handling the exception." << endl;

    return 0;
}