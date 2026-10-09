#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<char> ab;
    cout << "note : ";
    string st;
    cin >> st;

    for (char ch : st)
    {
        ab.push(ch);
    }
    cout << "reverse: ";
    while (!ab.empty())
    {
        cout<<ab.top();
        ab.pop();
    }

    return 0;
}