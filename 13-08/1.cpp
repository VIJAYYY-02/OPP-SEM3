

#include<iostream>
using namespace std;
class tracker{
    private:
    static int objectCount;
    int id;
    public:
    tracker(){
        objectCount++
        id=objectCount;
    }
}

static int getcount(){
    return objectCount;
}

int tracker::objectCount=0;

int main() {
    // Call static function without creating an object
    cout << "Initial count: " << tracker::getCount() << endl; // Outputs 0
    
    tracker obj1;
    tracker obj2;
    
    // Call static function after object creation
    cout << "Final count: " << tracker::getCount() << endl; // Outputs 2
    
    return 0;