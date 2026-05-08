#include <iostream>
using namespace std;
int main()
{
    int n;
    int first, last;

    cin >> n;
    //last desitchick.................................................
    last = n % 10;
    cout << "last=" << last;

    //first desit chick.......................................
    int no =n;
    while (no >= 10)
    {
        no=no/10;
    }
    first = no;
    cout << "fas" << first << endl;

    return 0;
}