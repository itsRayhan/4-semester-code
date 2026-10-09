#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum = 0;

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + n;
    }
    cout << "sum of=" << sum << endl;

    return 0;
}