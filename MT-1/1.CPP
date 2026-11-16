#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    // Constructor with default argument
    Rectangle(int l, int b = 10)
    {
        length = l;
        breadth = b;
    }

    int area();   // Function declaration
};

// Function defined outside the class
int Rectangle::area()
{
    return length * breadth;
}

int main()
{
    Rectangle r1(20); // breadth takes default value 10

    cout << "Area of Rectangle = " << r1.area() << endl;

    return 0;
}