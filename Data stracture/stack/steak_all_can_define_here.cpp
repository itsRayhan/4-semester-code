#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    cout << "top on stack" << st.top() << endl;

    cout << "how may integer in stack" << st.size() << endl;

    st.pop();
    cout << "top on stack" << st.top() << endl;

    cout << "how may integer in stack" << st.size() << endl;

    /*stack a ki jaga asa na khali hoia gasa aita chick kora */
    if(!st.empty()){
        cout << " Stack is not empty ";
    }
    return 0;
}