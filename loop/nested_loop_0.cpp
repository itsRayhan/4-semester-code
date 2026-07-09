#include <iostream>
using namespace std;

int main()
{
    int n = 4;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << "O ";
            }
            else
            {
                cout << "E ";
            }
        }

        cout << endl;
    }

    return 0;
}