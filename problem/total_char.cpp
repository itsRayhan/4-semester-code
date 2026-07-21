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
    int count=0;
    while (!ab.empty())
    {
        ab.pop();
        count++;
    }
    cout << " hor many char : " << count;

    return 0;
}