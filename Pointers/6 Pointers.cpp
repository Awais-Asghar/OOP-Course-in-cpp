#include <iostream>
using namespace std;
int main() 
{
    int a = 50, b = 30;
    int *p1, *p2;
    p1 = &a;
    p2 = &b;
    
    cout << "p1 = " << p1 << endl; // prints the address of a
    cout << "p2 = " << p2 << endl; // prints the address of b
    cout << "&a = " << &a << endl; // prints the address of a
    cout << "&b = " << &b << endl; // prints the address of b
    cout << "a = " << a << endl; // prints the value of a
    cout << "b = " << b << endl; // prints the value of b
    cout << "*p1 = " << *p1 << endl; // prints the value of a
    cout << "*p2 = " << *p2 << endl; // prints the value of b

    *p1 = 10; // Assign value 10 to where *p1 is pointing
     p1 = p2; // Write the address in p2 to p1
    *p1 = 20; // Assign value 10 to where *p1 is pointing

    cout << "p1 = " << p1 << endl; // prints the address of b
    cout << "p2 = " << p2 << endl; // prints the address of b
    cout << "&a = " << &a << endl; // prints the address of a
    cout << "&b = " << &b << endl; // prints the address of b
    cout << "a = " << a << endl; // prints the value of a
    cout << "b = " << b << endl; // prints the value of b
    cout << "*p1 = " << *p1 << endl; // prints the value of b
    cout << "*p2 = " << *p2 << endl; // prints the value of b
    return 0;
}
