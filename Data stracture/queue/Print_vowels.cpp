#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<char> st;
    string ab;
    cout << "enter english something : ";
    cin >> ab;
   
    for (char ch : ab)
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' )
        {
            st.push(ch);
        }
    }
    cout<<"output ";
    while (!st.empty())
    {
        cout<<st.front();
        st.pop();
    }

    return 0;
}