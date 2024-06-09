#include <iostream>
#include <string>
using namespace std;

class Student {
public:
	string Name;
    int Age;
	int Roll_Number;
	double Average;
	double Percentage;
	double Marks_Subject1;
	double Marks_Subject2;
	double Marks_Subject3;

    void input() 
	{
		cout<<"Please enter the Name of the student: "<<endl;
		cin>>Name;
		cout<<"Please enter the age of the student: "<<endl;
		cin>>Age;
		cout<<"Please enter the roll number of the student: "<<endl;
		cin>>Roll_Number;
		cout<<"Please enter the marks of Subject 1 out of 100: "<<endl;
		cin>>Marks_Subject1;
		cout<<"Please enter the marks of Subject 2 out of 100"<<endl;
		cin>>Marks_Subject2;
		cout<<"Please enter the marks of Subject 3 out of 100 "<<endl;
		cin>>Marks_Subject3;
	}
	void Calculate_Average()
	{
		Average = (Marks_Subject1+Marks_Subject2+Marks_Subject3)/3;
		cout <<" has Average of marks of three subjects of this student is: "<<Average<<endl;
	}
	
	void Calculate_Percentage()
	{
		Percentage = ((Marks_Subject1+Marks_Subject2+Marks_Subject3)/300)*100;
		cout <<"The Percentage of marks of three subjects of this student is  "<<Percentage<<" % "<<endl;
	}
};

int main()
{
    Student S1,S2;
    cout<<"Enter the details of the two students: "<<endl;
    S1.input();
    cout<<S1.Name<<" has age "<<S1.Age<<" and Roll Number "<<S1.Roll_Number<<endl;
    S1.Calculate_Average();
    S1.Calculate_Percentage();
    S2.input();
    cout<<S2.Name<<" has age, "<<S2.Age<<" and Roll Number  "<<S2.Roll_Number<<endl;
    S2.Calculate_Average();
    S2.Calculate_Percentage();
    return 0;
}
