#include <iostream>
#include <string>
#include <vector>
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
    friend BankAccount auditAccount(const BankAccount& account);

};
BankAccount auditAccount(const BankAccount& account) {
    cout << "Account Number: " << account.accountNumber << endl;
    cout << "Current Balance: " << account.balance << endl;
}

int main()
{
    vector<BankAccount> accounts;
    accounts.push_back(BankAccount("789012", 1500.0));
    accounts.push_back(BankAccount("345678", 2000.0));
    string targetAccountNumber = "789012";
    BankAccount targetAccount;

    for (BankAccount a : accounts) {
        if (a.getAccountNumber() == targetAccountNumber) {
            auditAccount(a);
            break;
        }
    }
    return 0;
}
