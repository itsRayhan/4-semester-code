#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string>
        vec;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        if (x % y != 0)
        {
            vec.push_back("no");
            continue;
        }
        int z = y / x;
        if (x % z == 0)
        {
            vec.push_back("yes");
        }
        else
        {
            vec.push_back("no");
        }
    }
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << endl;
    }
    return 0;
}