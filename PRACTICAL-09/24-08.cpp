#include <iostream>
using namespace std;

class Student {
    int roll;
    string name;

public:
    void input() {
        cout << "Enter roll number: ";
        cin >> roll;

        cout << "Enter name: ";
        cin >> name;
    }

    void display() {
        cout << "Roll No: " << roll << endl;
        cout << "Name: " << name << endl;
    }
};

int main() {

    // Pointer to an object
    Student *ptr = new Student;

    cout << "Enter details of one student:\n";
    ptr->input();

    cout << "\nStudent details:\n";
    ptr->display();

    delete ptr;


    // array of objects
    int n;
    cout << "\nEnter number of students: ";
    cin >> n;

    Student *arr = new Student[n];

    cout << "\nEnter student details:\n";
    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << ":\n";
        arr[i].input();
    }

    cout << "\nAll Student Details:\n";
    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << ":\n";
        arr[i].display();
    }

    delete[] arr;

    return 0;
}