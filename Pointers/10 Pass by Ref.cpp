#include<iostream>
using namespace std;
void modifyByReference(int &x) 
{
    x += 10;
}

int main()
{
    int value1 = 5;
    cout << "Original value:" << value1 << endl;
    modifyByReference(value1);
    cout << "Modified value" << value1 << " (modified by reference)" << endl;
    return 0;
}
