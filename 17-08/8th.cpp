#include <iostream>
using namespace std;

class Number
{
    int value;

public:
    Number(int v = 0)
    {
        value = v;
    }

    void display()
    {
        cout << "Value = " << value << endl;
    }

    Number add(Number n)
    {
        Number result;
        result.value = value + n.value;
        return result;
    }
};

int main()
{
    Number n1(10);
    Number n2(20);
    Number n3;

    cout << "First object: ";
    n1.display();

    cout << "Second object: ";
    n2.display();

    n3 = n1.add(n2);

    cout << "Result: ";
    n3.display();

    return 0;
}