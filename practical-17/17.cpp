#include <iostream>
using namespace std;

class Distance {
private:
    int meters;
    int centimeters;

public:

    Distance() : meters(0), centimeters(0) {}

    Distance(int m, int cm) : meters(m), centimeters(cm) {}


    Distance(double totalCentimeters) {
        meters = static_cast<int>(totalCentimeters) / 100;
        centimeters = static_cast<int>(totalCentimeters) % 100;
    }

    
    operator float() const {
        return meters + (centimeters / 100.0f);
    }

    void display() const {
        cout << meters << " m, " << centimeters << " cm\n";
    }
};

int main() {
    cout << "=== 1. Basic Type to Class Type Conversion ===\n";
    double rawLength = 345.75; 
    Distance d1 = rawLength; 
    
    cout << "Raw length (double): " << rawLength << " cm\n";
    cout << "Converted to Distance object: ";
    d1.display();

    cout << "\n=== 2. Class Type to Basic Type Conversion ===\n";
    Distance d2(5, 75); 
    float totalMeters = d2; 
    
    cout << "Distance object: ";
    d2.display();
    cout << "Converted to basic float (meters): " << totalMeters << " m\n";

    return 0;
}