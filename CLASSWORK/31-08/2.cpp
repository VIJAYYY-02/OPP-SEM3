#include <iostream>
#include <memory>   // Required for shared_ptr
using namespace std;

class student {
public:
    student() {
        cout << "created\n";
    }
    ~student() {
        cout << "destroyed\n";
    }
    void study() {
        cout << "studying\n";
    }
};

int main() {
    shared_ptr<student> ptr1 = make_shared<student>();
    cout << "count: " << ptr1.use_count() << "\n";

    {
        shared_ptr<student> ptr2 = ptr1;  // shared ownership
        cout << "count after ptr2 scope: " << ptr1.use_count() << "\n";

        ptr2->study();
    } // ptr2 goes out of scope here

    cout << "count after ptr2 dies: " << ptr1.use_count() << "\n";

    return 0;
}
