#include <iostream>
using namespace std;

class Grandfather
{
protected:
    string lastName;

public:
    Grandfather()
    {
        cout<<"grandfatehr name: mojid khan";
        lastName = "Khan";
    }
};

class Father : public Grandfather
{
protected:
    string fatherName;

public:
    Father()
    {
        cout << "Enter Father's First Name: ";
        cin >> fatherName;
    }

    void showFather()
    {
        cout << "Father's Full Name: " << fatherName << " " << lastName << endl;
    }
};

class Me : public Father
{
private:
    string myName;

public:
    Me()
    {
        cout << "Enter My First Name: ";
        cin >> myName;
    }

    void showMe()
    {
        cout << "My Full Name: " << myName << " " << lastName << endl;
    }
};

int main()
{
    Me me;

    cout << endl;
    me.showFather();
    me.showMe();

    return 0;
}