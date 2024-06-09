#include <iostream>
using namespace std;
int modifyValue(int numb) 
{
    numb += 10;
    cout << "Inside function: num1 = " << numb << endl;
    return numb;
}

int main() 
{
    int num1 = 5;

    cout << "Before function call: num1 = " << num1 << endl;

    int x = modifyValue(num1);
    cout << "x = "<<x<<endl;
    cout << "After function call: num1 = " << x << endl;
    cout << "After function call: num1 = " << num1 << endl;
    return 0;
}
