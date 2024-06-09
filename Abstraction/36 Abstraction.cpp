#include<iostream>
#include<vector>
using namespace std;
class Student {
public:
    Student(int ID, string NAME, int YEAR)
        : student_id(ID), name(NAME), year(YEAR) {}
    virtual void print() const {
        cout << "Student ID: " << student_id << ", Name: " << name << ", Year: " << year << endl;
    }
    int getYear() const {
        return year; }
protected:
    int student_id;
    string name;
    int year;
};

class GradStudent : public Student {
public:
    GradStudent(int ID, string NAME, int YEAR, string Department, string Thesis)
        : Student(ID, NAME, YEAR), department(Department), thesis(Thesis) {}
    void print() const override {
        Student::print();
        cout << "Department: " << department << ", Thesis: " << thesis << endl;
    }
protected:
    string department;
    string thesis;
};

class AcademicEvent {
public:
    AcademicEvent(int year) : year(year) {}
    virtual void handleInvitations(const vector<Student*>& students) const = 0;
protected:
    int year;
};

class Convocation : public AcademicEvent {
public:
    Convocation(int year) : AcademicEvent(year) {}
     void handleInvitations(const vector<Student*>& students) const override {
        cout << "Inviting students to Convocation " << year << endl;
        for (int i = 0; i < students.size(); i++) {
            students[i]->print();
            cout<<endl;
            const GradStudent* gradStudent = dynamic_cast<const GradStudent*>(students[i]);
            if (gradStudent && gradStudent->getYear() == year) {
                cout << "Inviting Grad Student " << gradStudent->getYear() << endl;
            }
        }
    }
};
class Conference : public AcademicEvent {
public:
    Conference(int year) : AcademicEvent(year) {}
    void handleInvitations(const vector<Student*>& students) const override {
        cout << "Inviting students to Conference " << year << endl;
        for (size_t i = 0; i < students.size(); ++i) {
            students[i]->print();
            const GradStudent* gradStudent = dynamic_cast<const GradStudent*>(students[i]);
            if (gradStudent && gradStudent->getYear() == year - 1) {
                cout << "Inviting Grad Student " << gradStudent->getYear() << endl;
            }
        }
    }
};

int main() {
    GradStudent gradStudent1(427265, "Awais Asghar", 2023, "Electrical Engineering", "Embedded Systems ");
    GradStudent gradStudent2(306287, "Ali", 2022, "Computer Science", "Machine Learning");
    vector<Student*> students;
    students.push_back(&gradStudent1);
    students.push_back(&gradStudent2);
    Convocation convocation(2023);
    Conference conference(2023);
    convocation.handleInvitations(students);
    conference.handleInvitations(students);
    return 0;
}
