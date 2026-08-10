#include <bits/stdc++.h>
using namespace std;

class GrandFather
{
public:
    void grandFatherInfo()
    {
        cout << "This is GrandFather class." << endl;
    }
};

class Father : public GrandFather
{
public:
    void fatherInfo()
    {
        cout << "This is Father class." << endl;
    }
};

class Son : public Father
{
public:
    void sonInfo()
    {
        cout << "This is Son class." << endl;
    }
};

int main()
{
    Son s;

    s.grandFatherInfo();
    s.fatherInfo();
    s.sonInfo();

    return 0;
}