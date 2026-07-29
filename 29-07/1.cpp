#include <bits/stdc++.h>
using namespace std;

class Example
{
public:
    int a;

   
    void getData(int x)
    {
        a = x;
    }

   
    void addTo(Example E)
    {
        a = a + E.a;
    }

    void display()
    {
        cout << "Value = " << a << endl;
    }
};

int main()
{
  
    Example E1, E2;


    E1.getData(10);
    E2.getData(20);

    cout << "E1: ";
    E1.display();
    cout << "E2: ";
    E2.display();

    E1.addTo(E2);
    E2.addTo(E1);

    cout << "E1: ";
    E1.display();
     cout << "E2: ";
    E2.display();

    return 0;
}