#include <bits/stdc++.h>
using namespace std;

class Number
{
private:
    int value;

public:
    void setValue(int v)
    {
        value = v;
    }

    Number add(Number n)
    {
        Number temp;
        temp.value = value + n.value;
        return temp;
    }

    void display()
    {
        cout << "Sum = " << value << endl;
    }
};

int main()
{
    Number n1, n2, result;

    n1.setValue(20);
    n2.setValue(30);

    result = n1.add(n2);

    result.display();

    return 0;
}
