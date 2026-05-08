// theory
// ex=n%10
// n=n/10
// reverse=reverse*10+ex
#include <iostream>
using namespace std;
int main()
{
    int n;
    int ex, reverse=0;
    int main;

    cin >> n;
    main = n;
    
    while (n != 0)
    {
        ex = n % 10;
        n = n / 10;
        reverse = reverse * 10 + ex;
    }
    cout << "reverse=" << reverse << endl;

    if (main == reverse){
        cout<<"valid panildorm"<<endl;
    }else{
        cout<<"not panlidrom"<<endl;
    }
    return 0;
}