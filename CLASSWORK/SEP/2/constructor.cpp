#include <iostream>
using namespace std;

class account{                       //Constructor overloading//
    private:
    string name;
    double balance;
    public:
    account(){
        name="unknown";
        balance=0;
    }
     
    account(string n){
        name=n;
        balance=0;
    }

    account(string n, double b){
        name=n;
        balance=b;
    }

    void display(){
        cout<<"Name: "<<name<<endl<<"Balance: "<<balance<<endl;
    }
};





int main(){
    account a1("vj1");
    account a2("vj");
    account a3("vj3",1000.05);
   
    a1.display();
    a2.display();
    a3.display();
    return 0;
}