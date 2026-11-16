#include <iostream>
using namespace std;

class Employee
{
private:
    string name;
    int empNo;

public:
    Employee(string n, int e)
    {
        name = n;
        empNo = e;
    }

    void compare(Employee e)
    {     cout << "Higher Employee Number:\n";
        if (empNo > e.empNo)
        {
         
            cout << "Name : " << name << endl;
            cout << "Employee No : " << empNo;
        }
        else
        {
          
            cout << "Name : " << e.name << endl;
            cout << "Employee No : " << e.empNo;
        }
    }
};

int main()
{
    Employee e1("Rahul", 101);
    Employee e2("Amit", 120);

    e1.compare(e2);

    return 0;
}