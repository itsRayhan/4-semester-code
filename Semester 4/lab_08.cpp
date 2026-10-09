#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    void show()
    {
        cout << "This is the Person class." << endl;
    }
};

class Student : public Person
{
public:
    void student()
    {
        cout << "This is the Student class." << endl;
    }
};

class Teacher : public Person
{
public:
    void teacher()
    {
        cout << "This is the Teacher class." << endl;
    }
};

int main()
{
    Student s;
    Teacher t;

    s.show();
    s.student();

    t.show();
    t.teacher();

    return 0;
}