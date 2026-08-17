#include <iostream>
using namespace std;

#define SQUARE(x) ((x) * (x))

int main()
{
    cout << SQUARE(5) << endl;
    cout << SQUARE(3 + 2) << endl;

    return 0;
}