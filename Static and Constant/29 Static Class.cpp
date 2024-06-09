#include <iostream>
using namespace std;

class Complex {
public:
    static int staticVar;
     int constVar;

    Complex(int x) : staticVar(x)
    {
        staticVar++; // Increment the static variable when a new object is created
    }
};
int Complex::staticVar = 0;

int main() {
    Complex obj1(20); 
    Complex obj2(30);
	Complex obj3(40);
    cout << "Static variable: " << Complex::staticVar << endl;
    return 0;
}
