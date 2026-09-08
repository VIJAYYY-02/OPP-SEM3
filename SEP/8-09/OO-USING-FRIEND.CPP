#include <iostream>
using namespace std;

class Number {
    int x;
    public:
    Number(int a) {
        x = a;
    }   
    //friend function
    friend Number operator+(Number n1, Number n2);
       void display() {
           cout << "Value: " << x << endl;
       }
    };

Number operator+(Number n1, Number n2) {
    return Number(n1.x + n2.x);
}
int main() {
    Number n1(10), n2(20), n3(0);

    cout << "First number: ";
    n1.display();

    cout << "Second number: ";
    n2.display();

    // Binary operation using friend function
    n3 = n1 + n2;
    cout << "After binary + operation: ";
    n3.display();

    return 0;
}