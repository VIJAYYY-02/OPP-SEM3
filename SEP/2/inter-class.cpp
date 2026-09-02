#include <iostream>
using namespace std;    
class parent{
    private:
        int x;
    public:
        parent(){
            cout<<"1.parent default constructor called"<<endl;
        }
        parent(int a){
           
            cout<<"2.parent parameterized constructor with value "<<a<<" called"<<endl;
        }};
        class child:public parent{
    public: 

        child(int val):parent(val){
            cout<<"3.child parameterized constructor with value "<<val<<" called"<<endl;
        }
};

int main(){
    child c(10);
    return 0;
}