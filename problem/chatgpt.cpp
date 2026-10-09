#include <bits/stdc++.h>
using namespace std;
/// Count Uppercase, Lowercase, Digits & Special Characters
int main()
{
    string ab;
    cout << "xjkf = ";
    cin >> ab;
    char ch;
    int total = 0;
    int dig = 0;
    int upc = 0;
    int lc = 0;
    int sc = 0;
    for (char ch : ab)
    {
        if (isalpha(ch))
        {
            total += 1;
            // count++
        }
        if (isdigit(ch))
        {
            dig += 1;
            // dig++
        }
        if (isupper(ch))
        {
            upc++;
        }
        if (islower(ch))
        {
            lc++;
        }
        else
        {
            sc++;
        }
    }
    cout << "abcd=" << total << endl;
    cout << "dig=" << dig << endl;
    cout << "upc=" << upc << endl;
    cout << "lcc=" << lc << endl;
    cout << "sc=" << lc << endl;

    return 0;
}
/*Sample Input
                  Rayhan123@WUB
Sample Output

Uppercase : 3
Lowercase : 6
Digits    : 3
Special   : 1*/