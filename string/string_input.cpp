
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string cr;

    cout << "Write something: ";
    cin >> cr;

    for (int i = 0; i < cr.length(); i++)
    {
        if (cr[i] >= 'A' && cr[i] <= 'Z')
        {
            cout << cr[i] << " = Uppercase" << endl;
        }
        else if (cr[i] >= 'a' && cr[i] <= 'z')
        {
            cout << cr[i] << " = Lowercase" << endl;
        }
        else if (cr[i] >= '0' && cr[i] <= '9')
        {
            cout << cr[i] << " = Digit" << endl;
        }
        else
        {
            cout << cr[i] << " = Special Character" << endl;
        }
    }

    return 0;
}