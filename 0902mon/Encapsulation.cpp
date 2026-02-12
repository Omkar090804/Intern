#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;   // hidden data

public:
    void setBalance(double b) {
        balance = b;
    }

    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount obj;

    obj.setBalance(5000);
    cout << "Balance: " << obj.getBalance() << endl;

    // obj.balance = 10000; ❌ Error (private)
}
