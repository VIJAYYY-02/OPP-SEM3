#include <iostream>
using namespace std;

class box{
    private:
        int weight;
    public:
        box(int w){
            weight=w;
        }
        box operator+(box b){
            return box(weight+b.weight);
        }
        void display(){
            cout<<"Weight of box is "<<weight<<"kg"<<endl;
        }

};
int main(){
    box b1(10),b2(20),b3(0);
    b3=b1+b2;
    b3.display();
    return 0;
}