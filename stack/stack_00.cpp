#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> st;

    // 1. push() — stack-এ উপরে রাখো
    st.push(10);
    st.push(20);
    st.push(30);

    // 2. top() — উপরেরটা দেখো, বের করে না
    cout << st.top(); // 30

    // 3. pop() — উপর থেকে বের করে ফেলো
    st.pop();
    cout << st.top(); // 20

    // 4. size() — কতটা element আছে
    cout << st.size(); // 2

    // 5. empty() — খালি কিনা চেক করো
    if (!st.empty())
        cout << "খালি না";

    // 6. swap() — দুইটা stack অদলবদল করো
    stack<int> st2;
    st2.push(100);
    st.swap(st2);
    cout << st.top(); // 100

    return 0;
}