#include <iostream>
using namespace std;

class number{
    private:
        int x;
    public:
        number(int a){
            x=a;
        }
        void operator-(){



   x=-x;
}
void display(){
    cout<<"value="<<x<<endl;
}
};

int main(){
    number n(10);
    cout<<"Before operator overloading"<<endl;
    n.display();
    -n;

    cout<<"After operator overloading"<<endl;
    n.display();

    return 0;

}