#include <bits/stdc++.h>
using namespace std;

class Student
{
private:
    string name;
    int age;

public:
    Student(string n, int a)
    {
        name = n;
        age = a;
    }

    Student(const Student &s)
    {
        name = s.name;
        age = s.age;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age : " << age << endl;
    }
};

int main()
{
    Student s1("Rayhan", 21);
    Student s2 = s1;

    cout << "Original Object:" << endl;
    s1.display();

    cout << endl;

    cout << "Copied Object:" << endl;
    s2.display();

    return 0;
}