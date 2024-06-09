#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Student {
public:
    string StudentID;
    string StudentName;
    string StudentField;

    Student():StudentID(""), StudentName(""), StudentField(""){}
    Student(string ID, string Name, string Field) : StudentID(ID), StudentName(Name), StudentField(Field) {}

    void UpdateData(string Name, string Field) {
        StudentName = Name;
        StudentField = Field;
    }

    void DisplayDetailsStudent() {
        cout << "Student ID: " << StudentID << endl;
        cout << "Student NAME: " << StudentName << endl;
        cout << "Student FIELD: " << StudentField << endl;
    }

};

class Course {
public:
    string CourseID;
    string CourseTitle;
    string CourseInstructor;

    Course() : CourseID(""), CourseTitle(""), CourseInstructor(""){}
    Course(string CoID, string CoTitle, string CoIns) : CourseID(CoID), CourseTitle(CoTitle), CourseInstructor(CoIns) {}

    void DisplayDetailsCourse() {
        cout << "COURSE ID: " << CourseID << endl;
        cout << "COURSE TITLE: " << CourseTitle << endl;
        cout << "COURSE INSTRUCTOR: " << CourseInstructor << endl;
    }
    
};

class Enrollment {
public:
    string EnrollmentID;
    string StudentID;
    string CourseID;
    string Semester;

    Enrollment(): EnrollmentID(""),StudentID(""),CourseID(""),Semester(""){}
    Enrollment(string EnID, string StuID, string CoID, string Sem) : EnrollmentID(EnID), StudentID(StuID), CourseID(CoID), Semester(Sem) {}

    void DisplayDetailsEnrollment() {
        cout << "ENROLLMENT ID: " << EnrollmentID << endl;
        cout << "COURSE ID: " << CourseID << endl;
        cout << "STUDENT ID: " << StudentID << endl;
        cout << "SEMESTER: " << Semester << endl;
    }

};

int main() 
{
    vector<Student> students;
    vector<Course> courses;
    vector<Enrollment> enrollments;
    int key;
    string S_ID, S_name, S_field;
    string C_code, C_name, Instructor;
    string Enroll_ID, Stu_ID, Enroll_code, Semester;

    while (true)
    {
        cout << "*********************Welcome******************" << endl;
        cout << " 1->Enter Student information" << endl;
        cout << " 2->Enter course Details" << endl;
        cout << " 3->Enter enrollment Details" << endl;
        cout << " 4->Display student Details" << endl;
        cout << " 5->Exit the programme" << endl;
        cin >> key;
        if (key == 1)
        {
            cout << " Enter student ID: " << endl;
            cin >> S_ID;
            cout << " Enter student name: " << endl;
            cin >> S_name;
            cout << " Enter students major:" << endl;
            cin >> S_field;
            students.push_back(Student(S_ID,S_name,S_field));
        }
        if (key == 2)
        {
            cout << " Enter Course Code: " << endl;
            cin >> C_code;
            cout << " Enter Course name: " << endl;
            cin >> C_name;
            cout << " Enter Instructor:" << endl;
            cin >> Instructor;
        
            courses.push_back(Course(C_code,C_name,Instructor));

        }
        if (key == 3)
        {
            cout << " Enter Enrollment ID: " << endl;
            cin >> Enroll_ID;
            cout << " Enter Student ID: " << endl;
            cin >> Stu_ID;
            cout << " Enter Enrollment Code:" << endl;
            cin >> Enroll_code;
            cout << " Enter Semester:" << endl;
            cin >> Semester;

            enrollments.push_back(Enrollment(Enroll_ID,Stu_ID,Enroll_code,Semester));
        }
        if (key == 4)
        {
            cout << "+++++++++++++Display Details++++++++++++++" << endl<<endl;
            cout << "***** Student Details: *****" << endl;
            for (int i = 0; i < students.size(); i++) {
                students[i].DisplayDetailsStudent();
                cout << endl;
            }

            cout << "***** Course Details: *****" << endl;
            for (int i = 0; i < courses.size(); ++i) {
                courses[i].DisplayDetailsCourse();
                cout << endl;
            }

            cout << "***** Enrollment Details: *****" << endl;
            for (int i = 0; i < enrollments.size(); ++i) {
                enrollments[i].DisplayDetailsEnrollment();
                cout << endl;
            }
        }
        if (key == 5)
        {
            break;
        }
    }
    return 0;
}
