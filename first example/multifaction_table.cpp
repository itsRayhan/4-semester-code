#include <iostream>
using namespace std;
int main()
{
    int n;
    int i = 0, table;

    cout << "enter the number";
    cin >> n;

    for (i = 1; i <= 10; i++)
    {

        table = i * n;
        cout << n << " x " << i << " = " << table << endl;
        if (i >= n)
            break;
    }
    cout << "run code" << table << endl;

    return 0;
}