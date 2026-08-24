#include <iostream>
using namespace std;

class book {
public:
    string title;
     
    // Parameterized constructor
    book(string t) {
        title = t;
    }
};   

int main() {
    // Create objects using the parameterized constructor
    book b1("C++ Basics");
    book b2("Data Structures");
    book b3("Algorithms");

    // Print the titles of the books
    cout << "Book 1: " << b1.title << endl; 
    cout << "Book 2: " << b2.title << endl; 
    cout << "Book 3: " << b3.title << endl; 

    return 0;
}