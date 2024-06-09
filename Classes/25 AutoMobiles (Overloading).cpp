#include <iostream>
#include <string>
using namespace std;

class Automobile 
{
private:
	string make;
	string model;
	int year;
	double price;
	string color;
public:
	Automobile() :make(""), model(""), year(0), price(0.0) {}
	Automobile(string _make, string _model) :make(_make), model(_model) {}
	Automobile(string _make, string _model, int _year) :make(_make), model(_model), year(_year) {}
	Automobile(string _make, string _model, int _year, double _price) :make(_make), model(_model), year(_year), price(_price) {}
	Automobile(string _make, string _model, int _year, double _price, string _color) :make(_make), model(_model), year(_year), price(_price) ,color(_color) {}

	void setmake(string _m) 
	{
		make = _m;
	}
	string getmake() {
		return make;
	}
	void setmodel(string _mo) {
		model = _mo;
	}
	string getmodel() {
		return model;
	}
	void setyear(int _y) {
		year = _y;
	}
	int getyear() {
		return year;
	}
	void setprice(double _p) {
		price = _p;
	}
	double getprice() {
		return price;
	}
	void setcolor(string _c) {
		color = _c;
	}
	string getcolor() {
		return color;
	}
	void DisplayFunction() {
		cout << "==============AUTOMOBILE=============" << endl;
		cout << "Make: " << getmake() << endl;
		cout << "Model: " << getmodel() << endl;
		cout << "Year: " << getyear() << endl;
		cout << "Price: " << getprice() << endl;
		cout << "Color: " << getcolor() << endl;
		cout << "=====================================" << endl;
	}
};

int main() 
{
	int num, count_auto=0;
	string make, model, color;
	int year;
	double price;
	Automobile machine[5];

	while (true)
	{
		cout << "Press any of following keys to perform task" << endl;
		cout << "1. Initialize data with make and model" << endl;
		cout << "2. Initialize data with make, model and year" << endl;
		cout << "3. Initialize data with make, model, year and price" << endl;
		cout << "4. Initialize data with make, model, year, price & color" << endl;
		cout << "5. Display data" << endl;
		cout << "6. Exit the program" << endl;
		cin >> num;
		if (num == 1) {
			cout << "Enter the manufacturer:" << endl;
			cin >> make;
			cout << "Enter the model: " << endl;
			cin >> model;
			machine[count_auto].setmake(make);
			machine[count_auto].setmodel(model);
			count_auto++;
		}
		if (num == 2) {
			cout << "Enter the manufacturer:" << endl;
			cin >> make;
			cout << "Enter the model: " << endl;
			cin >> model;
			cout << "Enter year: " << endl;
			cin >> year;
			machine[count_auto].setmake(make);
			machine[count_auto].setmodel(model);
			machine[count_auto].setyear(year);
			count_auto++;
		}
		if (num == 3) {
			cout << "Enter the manufacturer:" << endl;
			cin >> make;
			cout << "Enter the model: " << endl;
			cin >> model;
			cout << "Enter year: " << endl;
			cin >> year;
			cout << "Enter price: " << endl;
			cin >> price;
			machine[count_auto].setmake(make);
			machine[count_auto].setmodel(model);
			machine[count_auto].setyear(year);
			machine[count_auto].setprice(price);
			count_auto++;
		}
		if (num == 4) {
			cout << "Enter the manufacturer:" << endl;
			cin >> make;
			cout << "Enter the model: " << endl;
			cin >> model;
			cout << "Enter year: " << endl;
			cin >> year;
			cout << "Enter price: " << endl;
			cin >> price;
			cout << "Enter color: " << endl;
			cin >> color;
			machine[count_auto].setmake(make);
			machine[count_auto].setmodel(model);
			machine[count_auto].setyear(year);
			machine[count_auto].setprice(price);
			machine[count_auto].setcolor(color);
			count_auto++;
		}
		if (num == 5) 
		{
			for (int i = 0; i < count_auto; i++) {
				machine[i].DisplayFunction();
				
			}
		}
		if (num == 6) {
			break;
		}
	}
	return 0;
}
