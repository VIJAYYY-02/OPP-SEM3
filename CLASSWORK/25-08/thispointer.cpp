#include <iostream>
using namespace std;

class engine; // Forward declaration

class car {
public:
    void connectEngine(engine* eng) {
        cout << "Engine connected to the car." << endl;
    }
};

class engine {
public:
    void installinto(car& vehicle) {
        vehicle.connectEngine(this); // 'this' is the current engine object
    }
};

int main() {
    car myCar;
    engine myEngine;

    myEngine.installinto(myCar);  // Engine installs itself into car
    return 0;
}
