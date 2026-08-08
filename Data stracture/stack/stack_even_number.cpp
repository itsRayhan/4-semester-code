#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    st.push(68.5);
    st.push(6.5);
    st.push(8.5732);
    st.push(57.5789);
    st.push(88.59);
    st.push(66.57);

    while (!st.empty())
    {
        if (st.top() % 2 == 0)
        {
            cout<< st.top()<<"=even"<<endl;
        }else{
            cout<<st.top()<<"=odd"<<endl;
        }
        st.pop();
    }
    return 0;
}