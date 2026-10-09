#include <bits/stdc++.h>
using namespace std;
/*print reverse opder in string using stack*/
int main()
{
    stack<char> st;
    string sc="rayhan";
    cout<<"normal order"<<sc<<endl;

    for(char i=0;i<= sc.length();i++)  //for(char ch : sc)
    {
        st.push(sc[i]);
    }
    cout<<"reverse"<<endl;

    while(!st.empty())
    {
        cout<<st.top();
        st.pop();
    }
    return 0;
}