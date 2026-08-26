#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (a == b)
        {
            ans.push_back(c);
        }
        else if (b == c)
        {
            ans.push_back(a);
        }
        else if (c == a)
        {
            ans.push_back(b);
        }
    }
    for (int x = 0; x < ans.size(); x++)
    {
        cout << ans[x] << endl;
    }

    return 0;
}