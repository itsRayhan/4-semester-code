#include <bits/stdc++.h>
using namespace std;
class car
{
private:
    string brand;
    int model;

public:
    car(string b, int m)
    {
        brand = b;
        model = m;
    }
    car(const car &s)
    {
        brand = s.brand;
        model = s.model;
    }
    void display()
    {
        cout << "barnd=" << brand << endl;
        cout << "model= " << model << endl;
    }
};
int main()
{
    car s1("BMW", 5);
    car s2 = s1;
    s1.display();
    s2.display();

    return 0;
}