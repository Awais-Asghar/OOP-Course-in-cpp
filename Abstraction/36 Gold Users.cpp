#include <iostream>
using namespace std;

class User {
    public:
        virtual void processFee() = 0;
};

class PlatinumUser : public User {
    public:
        void processFee() override {
            cout << "Processing fee for Platinum User. Additional benefits included." << endl;
        }
};

class GoldUser : public User {
    public:
        void processFee() override {
            cout << "Processing fee for Gold User. Special discounts applied." << endl;
        }
};

int main() {
    User* u1 = new PlatinumUser(); // parent class pointer to child class object
    User* u2 = new GoldUser(); // parent class pointer to child class object
    u1->processFee();
    u2->processFee();     
    delete u1;
    delete u2;
    return 0;
}
