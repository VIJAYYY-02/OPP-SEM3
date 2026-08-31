#include <iostream>
#include <memory>   // Required for smart pointers
using namespace std;

class student {
public:
    void study() {
        cout << "studying" << endl;
    }
};

int main() {
    unique_ptr<student> s1 = make_unique<student>();  // unique_ptr
    auto s2 = make_unique<student>();                 // auto deduces unique_ptr<student>

    s1->study();   // Calls study() on s1
    s2->study();   // Calls study() on s2

    return 0;
}
