#include<iostream>
using namespace std;
int main ()
{
    int n;
    int i,sum=0;

    cout<<"enter numbers:";
    cin>> n ;

    for(i=1;i<=n;i++)
    {
        cout<<i<<endl;
    }
    if(n<=100){
        cout<<"valid number"<<endl;
    }
    else
    {
        cout << "invalid number dont wright sum" << endl;
    }

    int devision = 0;
    int mult = 1;
    int sub = 0;

    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << "sum = " << sum << endl;
    devision=sum/n;
    cout << "devision = " << devision << endl;
    mult=sum*n;
    cout << "multiplication = " << mult << endl;
    sub=sum-n;
    cout << "subtraction = " << sub << endl;

    return 0;
}