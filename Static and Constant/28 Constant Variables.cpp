#include <iostream>
using namespace std;
class MyClass 
{
public:
    const int constVar; 
    MyClass(int x) : constVar(x) {}  // Initializing constVar in the constructor
    void changeConstVar(int newValue) {
        // This line would cause a compilation error since constVar cannot be modified.
        //constVar = newValue;
    }
};
int main()
{
    MyClass obj(20);
    cout << "Original constVar: " << obj.constVar << endl;
    // Attempting to change the constVar value will result in a compilation error
    obj.changeConstVar(30);
    return 0;
}
