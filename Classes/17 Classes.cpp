#include <iostream>
#include <string>
using namespace std;

class Car
{
private:
	string Model;
	string brand;
	int year;
public :
	void my_function()
	{
		cout<< "Enter the details of the car: "<<endl;
		cout<<"Enter the brand of the car: ";
		cin>>brand;
		cout<<"Enter the Model of the car: ";
		cin>>Model;
		cout<<"Enter the year of issue of the car: ";
		cin>>year;
	}
	void output_function()
	{
		cout <<"The details of the cars  are: ";
		cout<< "Model is "<<Model <<" , brand  "<< brand <<" and  year of issue is  "<< year <<"  "<<endl;
	}
};

int main()
{
	Car car1 , car2;
	car1.my_function();
	car2.my_function();
	car1.output_function();
	car2.output_function();
    return 0;
}
