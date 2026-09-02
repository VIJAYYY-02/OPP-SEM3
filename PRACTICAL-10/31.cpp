#include <iostream>
#include <memory>
using namespace std;

class Student {
public:
    Student(int marks) {
        cout << "Student object created" << endl;
        cout << "Marks: " << marks << endl;
    }

    ~Student() {
        cout << "Student object destroyed" << endl;
    }
};

int main() {
    // unique_ptr - owns the object exclusively
    {
        unique_ptr<Student> ptr1 = make_unique<Student>(85);

        cout << "Using unique_ptr" << endl;
    } // Object is automatically destroyed here

    // shared_ptr - multiple pointers can share ownership
    {
        shared_ptr<Student> ptr2 = make_shared<Student>(90);
        shared_ptr<Student> ptr3 = ptr2;

        cout << "Using shared_ptr" << endl;
        cout << "Number of owners: " << ptr2.use_count() << endl;
    } // Object is destroyed when the last shared_ptr is gone

    return 0;
}