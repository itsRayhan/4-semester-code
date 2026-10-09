#include <bits/stdc++.h>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int multi(int a, int b)
{
    return a * b;
}

float division(float a, float b)
{
    return a / b;
}

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Sum = " << sum(a, b) << endl;
    cout << "Subtraction = " << sub(a, b) << endl;
    cout << "Multiplication = " << multi(a, b) << endl;
    cout << "Division = " << division(a, b) << endl;

    return 0;
}