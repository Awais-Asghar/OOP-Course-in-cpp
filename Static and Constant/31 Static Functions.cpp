#include <iostream>
using namespace std;

class Math{
public:
    static int add(int a, int b) {
        return a + b;
    }

    static int multiply(int a, int b) {
        return a * b;
    }
};

int main() {
    int num1 = 5,num2 = 7;
    int sum = Math::add(num1, num2);
    int product = Math::multiply(num1, num2); // we can use the static function as many times as we want
    int Multiplication= Math::multiply(num1 ,num2);

    cout << "Sum: " << sum << endl;
    cout << "Product: " << product << endl;
    cout << "Multiplication: " << Multiplication << endl;
    return 0;
}
