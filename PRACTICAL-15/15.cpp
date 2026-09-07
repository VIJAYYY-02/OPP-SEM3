#include <iostream>
using namespace std;

class Parent {
public:
    void display() {
        cout << "Display function of Parent class" << endl;
    }
};

class Child : public Parent {
public:
    // Function overriding
    void display() {
        cout << "Display function of Child class" << endl;
    }
};

int main() {
    Parent p;
    Child c;

    p.display();
    c.display();

    return 0;
}