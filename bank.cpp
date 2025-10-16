#include <iostream>
using namespace std;

class Bank {
public:
    static float balance;  
    int wa, da;

    void withdraw() {
        cout << "Enter Amount to be withdrawn: ";
        cin >> wa;
        if (wa > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            balance -= wa;
            cout << "Balance after withdrawal: " << balance << endl;
        }
    }

    void deposit() {
        cout << "Enter Amount to be Deposited: ";
        cin >> da;
        balance += da;
        cout << "Balance after deposit: " << balance << endl;
    }
};


float Bank::balance = 0;

int main() {
    Bank e1, e2,e3;

    e1.deposit();
    e1.withdraw();
    e1.deposit();
    e2.withdraw();
    e3.deposit();
    e3.withdraw();

    return 0;
}
