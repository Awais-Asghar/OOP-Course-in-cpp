#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    string name;
    int employeeID;

public:
    Employee(const string& n, int id) : name(n), employeeID(id) {}

    void displayInfo() const {
        cout << "Name: " << name << ", Employee ID: " << employeeID << endl;
    }

};

class Manager : public Employee {
private:
    double baseSalary;
    int numSubordinates;

public:
    Manager(const string& n, int id, double salary, int subordinates)
        : Employee(n, id), baseSalary(salary), numSubordinates(subordinates) {}

    double calculatePay() const {
        return baseSalary + (numSubordinates * 500);
    }
};

class Developer : public Employee {
private:
    double hourlyRate;
    int hoursWorked;

public:
    Developer(const string& n, int id, double rate, int hours)
        : Employee(n, id), hourlyRate(rate), hoursWorked(hours) {}

    double calculatePay() const {
        return hourlyRate * hoursWorked; 
    }
};

int main() {
    Manager manager("Alice", 1001, 60000.0, 5);
    Developer developer("Bob", 1002, 40.0, 160);

    cout << "Manager Info: ";
    manager.displayInfo();
    cout << "Manager Pay: $" << manager.calculatePay() << endl;

    cout << "\nDeveloper Info: ";
    developer.displayInfo();
    cout << "Developer Pay: $" << developer.calculatePay() << endl;

    return 0;
}
