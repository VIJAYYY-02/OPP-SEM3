#include <iostream>
using namespace std;

class Website {
protected:
    string url;
    static int totalVisits;

public:
    Website(string u) {
        url = u;
    }


    friend void visit(Website &w);

    static void showTotalVisits() {
        cout << "Total visits: " << totalVisits << endl;
    }
};

int Website::totalVisits = 0;


void visit(Website &w) {
    cout << "Visiting: " << w.url << endl;  
    Website::totalVisits++;                
}

int main() {
    Website w1("www.google.com");
    Website w2("www.github.com");

    visit(w1);
    visit(w2);
    visit(w1);

    Website::showTotalVisits();
    return 0;
}
