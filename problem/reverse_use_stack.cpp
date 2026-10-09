#include <bits/stdc++.h>
using namespace std;



/* not possible to revese using queue beacuse is maintain fifo mathod 
it means first in first out so itsa not possible

but add a stack or recursion or deque 
possible to it */








int main()
{
    queue<char> ab;
    cout << "note : ";
    string st;
    cin >> st;

    for (char ch : st)
    {
        ab.push(ch);
    }

    return 0;
}