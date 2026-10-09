#include <bits/stdc++.h>
using namespace std;


// not understandthis code.. next time try it when i am perfect.





int main()
{
    stack<char> st;
    string str;

    cout << "Enter brackets: ";
    cin >> str;

    bool balanced = true;

    for (char ch : str)
    {
        // Opening brackets
        if (ch == '(' || ch == '{' || ch == '[')
        {
            st.push(ch);
        }
        // Closing brackets
        else if (ch == ')' || ch == '}' || ch == ']')
        {
            if (st.empty())
            {
                balanced = false;
                break;
            }

            if ((ch == ')' && st.top() == '(') ||
                (ch == '}' && st.top() == '{') ||
                (ch == ']' && st.top() == '['))
            {
                st.pop();
            }
            else
            {
                balanced = false;
                break;
            }
        }
    }

    if (!st.empty())
        balanced = false;

    if (balanced)
        cout << "Balanced";
    else
        cout << "Not Balanced";

    return 0;
}