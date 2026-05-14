#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number, sum = 0;
    float average;

    cout << "Enter 10 numbers:" << " ";

    for(int i = 1; i <= 10; i++)
    {
        cin >> number;
        sum = sum + number;
    }

    average = sum / 10.0;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}