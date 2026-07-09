#include <bits/stdc++.h>
using namespace std;

/*capital latter or upper case
small latetr or lower case
disit
spicial cahracture*/
int main()
{
    char cr;
    cout << "wright your mind=";
    cin >> cr;

    if (cr >= 'A' && cr <= 'Z')
    {
        cout << cr << "upercase" << endl;
    }
    else if(cr >= 'a' && cr <= 'z')
    {
        cout << cr << "lowercase" << endl;
    }
    else if(cr >= '0' && cr <= '9')
    {
        cout << cr << "disit" << endl;
    }
    else
    {
        cout << "spicial" << endl;
    }

    return 0;
}