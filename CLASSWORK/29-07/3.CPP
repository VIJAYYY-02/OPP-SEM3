#include <iostream>
using namespace std;

class GF1;   

class A
{
private:
    int private_variable;

protected:
    int protected_variable;

public:
    A()
    {
        private_variable = 10;
        protected_variable = 99;
    }

    friend class GF1;
};

class GF1
{
public:
    void display(A &obj)
    {
        cout << "The value of Private Variable = "
             << obj.private_variable << endl;

        cout << "The value of Protected Variable = "
             << obj.protected_variable << endl;
    }
};

int main()
{
    A obj;
    GF1 g;

    g.display(obj);

    return 0;
}