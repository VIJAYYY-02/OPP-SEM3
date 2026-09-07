#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Animal *ptr;

    Dog d;
    Cat c;

    // Base class pointer pointing to Dog object
    ptr = &d;
    ptr->sound();

    // Base class pointer pointing to Cat object
    ptr = &c;
    ptr->sound();

    return 0;
}