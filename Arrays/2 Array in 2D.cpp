#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    vector<vector<string>> studentInfo(numStudents, vector<string>(3, ""));

    for (int i = 0; i < numStudents; i++) {
        cout << "\nStudent " << i + 1 << ":\n";

        cout << "Enter student name: ";
        cin >> studentInfo[i][0];

        cout << "Enter student age: ";
        cin >> studentInfo[i][1];

        cout << "Enter student grade (A, B, C, or D): ";
        cin >> studentInfo[i][2];
    }

    cout << "\nStudent Information:\n";

    for (int i = 0; i < numStudents; i++) {
        cout << "Student " << i + 1 << ":\n";
        cout << "Name: " << studentInfo[i][0] << "\n";
        cout << "Age: " << studentInfo[i][1] << "\n";
        cout << "Grade: " << studentInfo[i][2] << "\n\n";
    }

    return 0;
}
