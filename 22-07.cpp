#include <iostream>
using namespace std;

// Inline function
inline int square(int x)
{
    return x * x;
}

// Function with default arguments
int add(int a = 0, int b = 0)
{
    return a + b;
}

// Function overloading
int operation(int a, int b)
{
    return a + b; // Addition
}

float operation(float a, float b)
{
    return a - b; // Subtraction
}

double operation(double a, double b)
{
    return a * b; // Multiplication
}

int main()
{
    int x, y;

    cout << "Enter two integers: ";
    cin >> x >> y;

    // Inline function
    cout << "\nSquare of first number = " << square(x) << endl;

    // Default arguments
    cout << "Addition using default arguments (both values) = " << add(x, y) << endl;
    cout << "Addition with one argument = " << add(x) << endl;
    cout << "Addition with no arguments = " << add() << endl;

    // Function overloading
    cout << "\nInteger Addition = " << operation(x, y) << endl;
    cout << "Float Subtraction = " << operation(10.5f, 5.2f) << endl;
    cout << "Double Multiplication = " << operation(4.5, 2.0) << endl;

    return 0;
}