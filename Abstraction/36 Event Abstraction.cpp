#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Student {
    protected:
        int student_id;
        string name;
        int year;
    public:
        Student(int id, string nm, int yr) : student_id(id), name(nm), year(yr) {}
        virtual void print() {
            cout << name << "," << student_id << "," << year << endl;
        };
        int getYear() {
            return year;
        }
        string getName() {
            return name;
        }
};

class GradStudent : public Student {
    private:
        string department;
        string thesis;
        bool hasCompletedConvocation;
    public:
        GradStudent(int id, string nm, int yr, string dept, string ths)
            : Student(id, nm, yr), department(dept), thesis(ths), hasCompletedConvocation(false) {}
        void print() override {
            Student::print();
            cout << "Graduate Student ID: " << student_id << ", Name: " << name << ", Year: " << year 
            << ", Department: " << department << ", Thesis: " << thesis << endl;
        }
        void setCompletedConvocation (bool status) {
            hasCompletedConvocation = status;
        }
        bool getHasCompletedConvocation() {
            return hasCompletedConvocation;
        }
};
class AcademicEvent {
    public:
        virtual void inviteStudent(Student* student) = 0;
};

class Convocation : public AcademicEvent {
    private:
        int year;
    public:
        Convocation(int yr) : year(yr) {}
        void inviteStudent(Student* student) override {
            GradStudent* grad_student = dynamic_cast<GradStudent*>(student);
            if (grad_student->getYear() == year) {
                cout << "Inviting student " << student->getName() << " to Convocation " << year << endl;
                grad_student->setCompletedConvocation(true);
            }
        }
};

class Conference : public AcademicEvent {
    public:
        void inviteStudent(Student* student) override {
            GradStudent* grad_student = dynamic_cast<GradStudent*>(student);
            if (grad_student) {
                if (grad_student->getHasCompletedConvocation()) {
                    cout << "Inviting graduate student " << grad_student->getName() << " to the conference." << endl;
                } else {
                    cout << "The student " << grad_student->getName() << " is not eligible for the conference." << endl;
                }
            } else {
                cout << "Invalid student type for conference invitation." << endl;
            }
        }
};

int main() {
    Student* student1 = new GradStudent(1, "Alice", 2023, "Physics", "Quantum Mechanics");
    Student* student2 = new GradStudent(2, "Bob", 2024, "Computer Science", "Machine Learning");
    Student* student3 = new GradStudent(3, "Charlie", 2023, "Biology", "Genetics");
    time_t current_time = std::time(nullptr);
    tm* time_info = std::localtime(&current_time);
    int current_year = time_info->tm_year + 1900;
    Convocation convocation(current_year);
    Conference conference;

    convocation.inviteStudent(student1);
    convocation.inviteStudent(student2);
    convocation.inviteStudent(student3);
    conference.inviteStudent(student1);
    conference.inviteStudent(student2);
    conference.inviteStudent(student3);

    delete student1;
    delete student2;
    delete student3;
    return 0;
}
