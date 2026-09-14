#include <iostream>
using namespace std;

class Distance {
    int meter;

public:
    Distance() {
        meter = 0;
    }

    Distance(int m) {
        meter = m;
    }

    operator int() {
        return meter;
    }

    void display() {
        cout << "Distance = " << meter << " meters" << endl;
    }
};

int main() {
    int x = 50;

    Distance d = x;
    cout << "Basic type to class:" << endl;
    d.display();

    int y = d;
    cout << "Class to basic type:" << endl;
    cout << "Distance = " << y << " meters" << endl;

    return 0;
}