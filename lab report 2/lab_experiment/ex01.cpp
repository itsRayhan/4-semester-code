#include <bits/stdc++.h>
using namespace std;

class book
{
private:
    string title;
    int price;

public:
    book()
    {
        title = "unknown";
        price = 0;
    }
    book(string t)
    {
        title = t;
        price = 100;
    }
    book(string t, int p)
    {
        title = t;
        price = p;
    }
    void display()
    {
        cout << "show=" << title << endl;
        cout << "show=" << price << endl;
    }
};

int
main()
{
    book s1;
    book s2("c++");
    book s3("jaba", 500);

    s1.display();
    s2.display();
    s3.display();

    return 0;
}