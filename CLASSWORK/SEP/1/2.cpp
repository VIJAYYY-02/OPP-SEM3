#include <iostream>
using namespace std;

class shape{
    public:
    virtual void draw(){
        cout<<"Drawing shape"<<endl;
    }

    virtual~shape(){}
};

class circle:public shape{
    public:
    void draw() override{
        cout<<"Drawing circle"<<endl;
    }
};

class rectangle:public shape{
    public:
    void draw() override{
        cout<<"Drawing rectangle"<<endl;
    }
};

int main(){
    shape* s1=new circle();
    shape* s2=new rectangle();

    s1->draw();
    s2->draw();

    delete s1;
    delete s2;

    return 0;
}