#include<iostream>
#include<string>
using namespace std;

class Car{
public:
	string make;
	string carmodel;
	int year;
	string color;
	Car(string m, string mod, int y, string c) :
		make(m), carmodel(mod), year(y), color(c){}
	void drive(){
		cout << "Driving like a car" << endl;
	}
	void displayCar(){
		cout << "Make  " << make << "\nModel  " << carmodel << "\nYear  " << year << "\nColor  " << color << endl;
	}
};

class Aircraft{
public:
	string manufacturer;
	int pmodel;
	string fueltype;
	Aircraft(string ma, int mo, string f) : manufacturer(ma), pmodel(mo), fueltype(f){}
	void fly(){
		cout << "Flying like a plane" << endl;
	}
	void displayPlane(){
		cout << "Manufacturer  " << manufacturer << "\nModel  " << pmodel << "\nFuel  " << fueltype << endl;
	}
};

class FlyingCar :public  Aircraft, public Car{
public:
	FlyingCar(string make, string mod, int y, string c, string manu, int mode, string f) : Car(make, mod, y, c),
		Aircraft(manu, mode, f){}
	void activateFlightMode(){
		cout << "This is a flying car--" << endl;
		Car::drive();
		Aircraft::fly();
		Aircraft::displayPlane();
	}
};

int main(){
	FlyingCar myflyingCar("Tesla", "G6", 2023, "Blue", "Awais Asghar", 2024, "AVGAS");
	myflyingCar.activateFlightMode();
	return 0;
}
