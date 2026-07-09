#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int prev = 1; // starting value

    for (int i = 1; i <= n; i++)
    {
        int result = prev + i;
        prev = result;
        cout << i << "=" << prev <<"="<< result<<endl;
    }

    return 0;
}