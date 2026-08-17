#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;  
public:

    BankAccount() {
        balance = 0;
    }


    double getBalance() const {
        return balance;
    }


    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }
};

int main() {
    BankAccount acc;

    acc.deposit(500);
    cout << "Balance = " << acc.getBalance() << endl;

    return 0;
}