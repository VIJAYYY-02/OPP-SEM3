#include <iostream>
using namespace std;

class Number {
    int x, y;
public:
    Number(int a, int b);
    void display();
};
Number::Number(int a, int b) {
    x = a;
    y = b;
}
void Number::display() {
    cout << "x = " << x << ", y = " << y << endl;
}

int main() {
    Number n1(10, 20);
    Number n2(30, 40);

    cout << "First number: ";
    n1.display();

    cout << "Second number: ";
    n2.display();

    return 0;
}
