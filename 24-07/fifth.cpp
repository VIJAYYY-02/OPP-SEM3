#include <iostream>
using namespace std;

class Circle {
    double r;   
public:
    
    Circle(double radius) {
        r = radius;
    }

   
    double area() {
        return 3.14 * r * r;
    }
};

int main() {
    Circle c(10);   
    cout << "Area: " << c.area() << endl;
    return 0;
}
