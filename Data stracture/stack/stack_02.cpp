#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*sum of  satck*/
    stack<float> st;
    double sum = 0;

    st.push(24.5);
    st.push(77);
    st.push(57.78);
    st.push(78.784);
    st.push(786.78748578);

    while (!st.empty())
    {
        sum +=st.top();
        st.pop();
    }
    cout << "sum of stack=" << sum << endl;

    return 0;
}