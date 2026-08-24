#include <iostream>
using namespace std;
class player {
    private:
    int health;
    int score;

    public:
    player(int h, int s){
        health = h;
        score = s;
        
    }
    void display() const {
        cout<<"Health: "<<health<<endl;
        cout<<"Score: "<<score<<endl;
    }

    void takedamage(int damage){
        health -=damage;

    }
};

int main() {
    const player warrior(100,50);
    warrior.display();

    return 0;
}