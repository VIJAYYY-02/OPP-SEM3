#include <iostream>
using namespace std;

class Student {
    int id;
public:
    void setId(int id) {
        this->id = id;  // 'this->id' refers to the member variable
    }
    void showId() {
        cout << "ID: " << id << endl;
    }
};

class  box{

    private:
        double width=0,height=0;
    public:
        box& setWidth(double w){
            width=w;
            return *this;
        }
        box& setHeight(double h){
            height=h;
            return *this;
        }
};

int main() {
    box mybox;
    mybox.setWidth(10.5).setHeight(20.0); // Method chainin

    Student s;
    s.setId(101);
    s.showId();
    return 0;
}
