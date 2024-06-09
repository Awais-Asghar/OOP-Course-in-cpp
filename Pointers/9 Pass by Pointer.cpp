#include <iostream>
using namespace std;
void modifyByPointer(int *x) 
{
    *x += 10;
}

int main() 
{
    int value1 = 5;
    cout << "Original value:" << value1 << endl;
    modifyByPointer(&value1);
    cout << "Modified values:" << value1 << " (modified by pointer)" << endl;
    return 0;
}
