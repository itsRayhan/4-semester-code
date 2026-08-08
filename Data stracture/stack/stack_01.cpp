#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*print all stack*/
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    while (!st.empty())
    {
        cout << "stack are alive=" << st.top() << endl;
        st.pop();
    }
    return 0;
}