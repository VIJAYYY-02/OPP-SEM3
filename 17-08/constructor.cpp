#include <iostream>
#include <string>
using namespace std;

class Student {
    string name;
    int age;

public:
    // 1. Default Constructor
    Student() {
        name = "Unknown";
        age = 0;
        cout << "Default constructor called!" << endl;
    }

    // 2. Parameterized Constructor
    Student(string n, int a) {
        name = n;
        age = a;
        cout << "Parameterized constructor called!" << endl;
    }

    // 3. Copy Constructor
    Student(const Student &s) {
        name = s.name;
        age = s.age;
        cout << "Copy constructor called!" << endl;
    }

    // 4. Move Constructor
    Student(Student &&s) noexcept {
        name = move(s.name);  // transfer ownership
        age = s.age;
        cout << "Move constructor called!" << endl;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1;                        
    Student s2("Vijay", 21);       
    Student s3 = s2;                 
    Student s4 = Student("rahul", 22);   

    s1.display();
    s2.display();
    s3.display();
    s4.display();

    return 0;
}
