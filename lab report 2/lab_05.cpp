#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;

    void getName()
    {
        cout << "Enter Name: ";
        cin >> name;
    }
};

class Student : public Person
{
public:
    int id;

    void getData()
    {
        cout << "Enter ID: ";
        cin >> id;
    }

    void display()
    {
        cout << "\nStudent Information" << endl;
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
    }
};

int main()
{
    Student s;

    s.getName();
    s.getData();
    s.display();

    return 0;
}