#include <iostream>
using namespace std;


class Student {
public:
    string name;
    int age;
    int rollNo;


    
    Student(string n, int a, int r) {
        name = n;
        age = a;
        rollNo = r;
      
    }


    void displayInfo() {
        cout << "Name: " << name
             << ", Age: " << age
             << ", Roll No: " << rollNo
             <<  endl;
    }
};

int main() {
    
    Student s1("Vijay", 21, 101);
    Student s2("Aman", 22, 102);
    Student s3("Priya", 20, 103);
    Student s4("Rohit", 23, 104);
    Student s5("Neha", 21, 105);

    
    s1.displayInfo();
    s2.displayInfo();
    s3.displayInfo();
    s4.displayInfo();
    s5.displayInfo();

    return 0;
}
