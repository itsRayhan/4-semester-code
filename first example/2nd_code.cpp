#include <iostream>
using namespace std;

int main()
{
    int i = 10;
    int n;
    i = n;

    for (i = n; i >= 1; i--)
    {
        cout << "for inside out=" << i << endl;
    }
    cout << "loop inside but down" << endl;

    while (i <= 5)
    {
        cout << "while loop inside=" << i << endl;
        i++;
    }
    i = 7;
    do
    {
        cout << "do while loop=" << i << endl;
        i--;

    } while (i >= 1);
}