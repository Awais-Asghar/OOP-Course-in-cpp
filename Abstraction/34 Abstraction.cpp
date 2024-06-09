#include <iostream>
#include <string>
using namespace std;

class BankAccount {
public:
    virtual void displayInfo() = 0; 
    virtual void calculateInterest() = 0; 
};

class Savings : public BankAccount {
public:
    void displayInfo()  override {
        cout << "Account No: 6656675" << endl;
        cout << "Account Type: Savings" << endl;
        cout << "Account Holder: Max" << endl;
        cout << "Account Amount: $90876890" << endl;
    }
    void calculateInterest() override {
        int amount = 1000;
        int interest = amount * 3 / 100;
        cout << "Annual interest is: $" << interest << endl<<endl;
    }
};

class Checkings : public BankAccount {
public:
    void displayInfo() override {
        cout << "Account No: 415375" << endl;
        cout << "Account Type: Checkings" << endl;
        cout << "Account Holder: Dustin" << endl;
        cout << "Account Amount: $45000" << endl;
    }
    void calculateInterest() override {
        int amount = 1000;
        int interest = amount * 2 / 100;
        cout << "Annual interest is: $" << interest << endl;
    }
};

int main() {
    int num = 2;
    BankAccount* accounts[num];
    accounts[0] = new Savings();
    accounts[1] = new Checkings();
    for (int i = 0; i < num; i++) {
        accounts[i]->displayInfo();
        accounts[i]->calculateInterest();
        delete accounts[i];
    }
    return 0;
}
