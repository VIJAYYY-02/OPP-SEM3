#include <iostream>
using namespace std;

class student {
public:                 // Make members accessible
    string name;

    // Default constructor
    student() {
        name = "vj";
    }   
};

int main() {
    student classroom[3];          // Calls default constructor for each
    classroom[0].name = "Vijay";   // Access is allowed now
    cout << classroom[0].name << endl;  
    return 0;
}
