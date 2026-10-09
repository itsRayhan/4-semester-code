#include <bits/stdc++.h>
using namespace std;

class destructor
{
public:
    destructor()
    {
        cout << "Constructor is called." << endl;
    }

    ~destructor()
    {
        cout << "Destructor is called." << endl;
    }

    void display()
    {
        cout << "Object is working." << endl;
    }
};

int main()
{
    destructor d1;

    d1.display();

    return 0;
}