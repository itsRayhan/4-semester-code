#include <bits/stdc++.h>
using namespace std;

int main()
{
    // string<char> ab;
    string ab;
    cout << "enter your valid string: ";
    cin >> ab;

    bool result = true;
    for (char ch : ab)
    {
        if (!isalpha(ch))
        {
            result = false;
            break;
        }
    }
    if (result)
    {
        cout << "vlaid";
    }
    else
    {
        cout << "false";
    }
    
    return 0;
}