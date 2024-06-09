#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;
public:
    BankAccount()
        : accountNumber(""), balance(0) {}

    BankAccount(string accNum, double initialBalance)
        : accountNumber(accNum), balance(initialBalance) {}

    const string getAccountNumber() const {
        return accountNumber;
    }

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (balance >= amount)
            balance -= amount;
        else
            cout << "Insufficient balance." << endl;
    }
    friend class FriendClass;
};

class FriendClass {
public:
    void displayAccountInfo(const BankAccount& account) {
        cout << "Account Number: " << account.accountNumber << endl;
        cout << "Current Balance: " << account.balance << endl;
    }
};
int main() {
    BankAccount myAccount("123456", 1000.0);
    FriendClass friendObj;
    friendObj.displayAccountInfo(myAccount);
    return 0;
}
