#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    x = 10;
    int *p = &x;
    *p = 101;
    cout << "after use pointer value:" << " " << x;
    // today new learn
    for (int i = 0; i < 5; i++)
    {
        this_thread::sleep_for(chrono::seconds(1));
        cout << ".";
        
    }
    cout << "pinter work parfectly" << endl;
    return 0;
}