#include <bits/stdc++.h>
using namespace std;

class student
{
private:
    string name;
    int s_id;

public:
    student(string a, int b)
    {
        name = a;
        s_id = b;
    }
};
class Employee
{
private:
    string ename;
    int salary;

public:
    Employee(string x, int y)
    {
        ename = x;
        salary = y;
    }
};
class TeachingAssistant : public student, public Employee
{
public:
    TeachingAssistant(string a, int b, string x, int y) :
    {
        student(a,b);
        Employee(x,y);
    }
    void display()
    {
        cout << "name" << name << endl;
        cout << "ename" << ename << endl;
        cout << "id" << id << endl;
        cout << "salary" << salary << endl;
    }
};
int main()
{
    TeachingAssistant s1("rayhan", 4778, "femaploy", 2000000000);
    s1.display();

    return 0;
};