#include <bits/stdc++.h>
using namespace std;

double eh(int a)
{
    if (a < 0)
    {
        throw "error: pointed error";
    }
    return sqrt(a);
}
int main()
{
    int x;
    cout << "enter x";
    cin >> x;
    try
    {
        int amni = eh(x);
        cout << "correct :" << amni;
    }
    catch (const char *msg){
    cout << "nothing=" << msg;}
    return 0;
}