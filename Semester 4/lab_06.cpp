#include <bits/stdc++.h>
using namespace std;

class Father
{
public:
    void fatherInfo()
    {
        cout << "This is Father class." << endl;
    }
};

class Mother
{
public:
    void motherInfo()
    {
        cout << "This is Mother class." << endl;
    }
};

class Child : public Father, public Mother
{
public:
    void display()
    {
        cout << "This is Child class." << endl;
    }
};

int main()
{
    Child c;

    c.fatherInfo();
    c.motherInfo();
    c.display();

    return 0;
}