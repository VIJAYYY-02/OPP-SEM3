#include <iostream>
using namespace std;

class Student {
    string name;
    int age;

public:
    // Default Constructor
    Student() {
        name = "Unknown";
        age = 0;
        cout << "Default constructor called!" << endl;
    }

    // Parameterized Constructor
    Student(string n, int a) {
        name = n;
        age = a;
        cout << "Parameterized constructor called!" << endl;
    }

    // Copy Constructor
    Student(const Student &s) {
        name = s.name;
        age = s.age;
        cout << "Copy constructor called!" << endl;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1;                  // Default constructor
    Student s2("Vijay", 21);     // Parameterized constructor
    Student s3 = s2;             // Copy constructor

    s1.display();
    s2.display();
    s3.display();

    return 0;
}
