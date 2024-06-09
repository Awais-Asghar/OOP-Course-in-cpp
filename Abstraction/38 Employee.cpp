#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    string name;
    int employeeID;
    double Salary;
    Employee(const string& n, int id, double salary)
        : name(n), employeeID(id), Salary(salary) {}
    virtual void work() const {
        cout << "Employee " << name << " is performing general tasks." << endl;
    }
    virtual double calculateSalary() const {
        return Salary;
    }
};

class Manager : virtual public Employee {
public:
    Manager(const string& n, int id, double salary)
        : Employee(n, id, salary) {}
    void work() const override {
        cout << "Manager " << name << " is supervising and managing tasks." << endl;
    }
};

class Developer : virtual public Employee {
public:
    Developer(const string& n, int id, double salary)
        : Employee(n, id, salary) {}
    void work() const override {
        cout << "Developer " << name << " is coding and developing software." << endl;
    }
};

class TeamLead : public Manager, public Developer {
public:
    TeamLead(const string& n, int id, double salary)
        : Employee(n, id, salary), Manager(n, id, salary), Developer(n, id, salary) {}
    void work() const override {
        cout << "TeamLead " << name << " is managing and leading the team with technical expertise." << endl;
    }
};

int main() {
    Manager manager("Ahmad", 1, 50000.0);
    Developer developer("Ali", 2, 60000.0);
    TeamLead teamLead("Awais Asghar", 3, 70000.0);
    manager.work();
    cout << "Manager's Salary: $" << manager.calculateSalary() << endl;
    developer.work();
    cout << "Developer's Salary: $" << developer.calculateSalary() << endl;
    teamLead.work();
    cout << "TeamLead's Salary: $" << teamLead.calculateSalary() << endl;
    return 0;
}
