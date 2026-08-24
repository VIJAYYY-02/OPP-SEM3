#include <iostream>
using namespace std;
class tracker{
    private:
     static int activeobjects;
     public:
     tracker(){
        activeobjects++;
        cout<<"Object created. total objects: "<<activeobjects<<endl;
     }

     //destructor handles cleanup tracking
        ~tracker(){
            activeobjects--;
            cout<<"Object destroyed. Active objects: "<<activeobjects<<endl;
 
        }
       static int getactiveobjects(){
        return activeobjects;
       }


    };

    int tracker::activeobjects=0;
    int main(){
        cout<<"program started"<<tracker::getactiveobjects()<<endl;
        tracker obj1;
        {
            tracker obj2;

        } 
        tracker obj3;
        cout<<"\nprogram ended \n"; 
        return 0;
    }