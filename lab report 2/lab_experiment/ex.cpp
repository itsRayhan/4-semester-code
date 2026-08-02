#include <bits/stdc++.h>
using namespace std;

class person
{
protected:
    
        string name;
        int age;
    

public:
    void userinfo()
    {
        cout << "enter name: ";
        cin >> name;
        cout << "enter age=";
        cin >> age;
    }
};
class customer : public person
{
protected:
    
        int account_number;
    

public:
    void accountinfo()
    {
        cout << "please enter your acccount number: ";
        cin >> account_number;
    }
};
class employee : public customer
{
protected:
    
        string em_name;
    

public:
    void employinfo()
    {
        cout << "please enter employ name: ";
        cin >> em_name;
    }
};
class account : public employee
{
private:
    
        int balance;
    

public:
    void balanceinfo()
    {
        cout << "type blance: ";
        cin >> balance;
    }
    void display()
    {

        
        cout << "name: " << name << endl;
        cout << "Account Number " << account_number << endl;
        cout << "Employee Name " << em_name << endl;
        cout << "Balance " << balance <<" ______";
        if (balance < 500)
        {
            cout << "low blance" << endl;
            ;
        }
        else
        {
            cout << "account active " << endl;
        }
    }
};

int main()
{
    account a;
    a.userinfo();
    a.accountinfo();
    a.employinfo();
    a.balanceinfo();

    a.display();

    return 0;
}