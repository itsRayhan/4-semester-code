#include <bits/stdc++.h>
using namespace std;

class person
{
private:
    string name;
    int age;

public:
    person()
    {
        cout << "Name: ";
        cin >> name;
        cout << "age: ";
        cin >> age;
    }
    void displayperson()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
class employee : public person
{
private:
    int id;
    int salary;

public:
    employee()
    {
        cout << "id: ";
        cin >> id;
        cout << "salary: ";
        cin >> salary;
    }
    void displayemployee()
    {
        cout << "ID: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
};
class Manager : public employee
{
public:
    void display()
    {
        displayperson();
        displayemployee();
    }
};
int main()
{
    Manager s1;
    s1.display();

    return 0;
}