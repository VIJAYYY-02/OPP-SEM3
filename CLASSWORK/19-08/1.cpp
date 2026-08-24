#include <iostream>
using namespace std;

class enclosing {
private:
    string secret = "C++ is powerful!";

public:
    // Nested class inside enclosing
    class nested {
    public:
        void revealsecret(enclosing &e) {
            cout << "The secret is: " << e.secret << endl;
        }
    };
};

int main() {
    enclosing outer;
    enclosing::nested inner;  // Correct syntax for nested class
    inner.revealsecret(outer);
    return 0;
}
