#include <iostream>
using namespace std;

class Example
{
public:
    int x;

    Example add(Example E1, Example E2)
    {
        Example E3;
        E3.x = E1.x + E2.x;
        return E3;
    }
};

int main()
{
    Example E1, E2, E3;

    E1.x = 56;
    E2.x = 103;

    cout << "Initial Values\n";
    cout << "Value of object1 = " << E1.x << endl;
    cout << "Value of object2 = " << E2.x << endl;

    E3 = E3.add(E1, E2);

    cout << "\nNew Values\n";
    cout << "Value of object1 = " << E1.x << endl;
    cout << "Value of object2 = " << E2.x << endl;
    cout << "Value of object3 = " << E3.x << endl;

    return 0;
}
