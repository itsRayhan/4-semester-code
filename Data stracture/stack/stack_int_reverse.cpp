#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    cout << "top element" << st.top() << endl;
    for (int i = 0; i < st.size(); i++)
    {
        cout<<st.push([i]);
    }
    cout<<"reverse  ";

    /*for(st.pop(): st.size())
    {
        cout << "pop all" << st.top() << endl
    }

    while(!st.empty())
    {
        cout<<st.top();
        st.pop();
    }*/

    return 0;
}