//design a program to overload unary and binary operations on user defined classes

#include <iostream>
using namespace std;

class Number {
    int x, y;

public:
    // Constructor
    Number(int a = 0, int b = 0) {
        x = a;
        y = b;
    }

    // Unary operator overloading (-)
    Number operator-() {
        return Number(-x, -y);
    }

    // Binary operator overloading (+)
    Number operator+(Number n) {
        return Number(x + n.x, y + n.y);
    }

    // Display function
    void display() {
        cout << "x = " << x << ", y = " << y << endl;
    }
};

int main() {
    Number n1(10, 20);
    Number n2(5, 15);

    cout << "First number: ";
    n1.display();

    cout << "Second number: ";
    n2.display();

    // Unary operation
    Number n3 = -n1;
    cout << "\nAfter unary - operation: ";
    n3.display();

    // Binary operation
    Number n4 = n1 + n2;
    cout << "After binary + operation: ";
    n4.display();

    return 0;
}