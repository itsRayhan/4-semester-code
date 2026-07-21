#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<char> ab;
    cout << "note : ";
    string st;
    cin >> st;

    for (char ch : st) //(char ch=0; ch<st; ch++)
    {
        ab.push(ch);
    }

    string rev;
    cout << "reverse : ";

    while (!ab.empty())
    {
        rev += ab.top();
        cout << ab.top();
        ab.pop();
    };
    cout << endl;
    if (rev == st)
    {
        cout << "panildrom";
    }
    else
    {
        cout << "not panildrom";
    }

    return 0;
}