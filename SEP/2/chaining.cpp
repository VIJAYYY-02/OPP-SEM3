#include <iostream>
#include <string>
using namespace std;

class player{
    private:
        string name;
        int age;
    public:
        player(string n, int a){
            name = n;
            age = a;
            cout << "Player " << name << " created." << endl;
        }

        //chained constructor
        player(string n): player(n, 0){
             cout << "Player " << name << " created with default age." << endl;
}};

int main(){
  
    player p2("Alice");
    return 0;
}