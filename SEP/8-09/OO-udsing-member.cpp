#include <iostream>
using namespace std;

class Number {
    int x;

    public:
    Number(int a) {
        x = a;
    }

    //member function 
    Number operator+(Number n) {
        return Number(x + n.x);
    }
    void display() {
        cout << "Value: " << x << endl;
    }
};
    int main() {
        Number n1(10), n2(20), n3(0);

        cout << "First number: ";
        n1.display();

        cout << "Second number: ";
        n2.display();

        // Binary operation using member function
        n3 = n1 + n2;
        cout << "After binary + operation: ";
        n3.display();

        return 0;
    }