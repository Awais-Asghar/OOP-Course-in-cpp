#include<iostream>
using namespace std;
int main() 
{
    int b[] = {10, 20, 30, 40};
    int *bPtr = b;
    int i;
    int offset;
    cout << "Array b printed with:\nArray subscript notation\n";
    for (i = 0; i < 4; i++) 
	{
        cout << "b[" << i << "] = " << *(b+i) << "\n";
    }
    cout << "\nPointer subscript notation\n";
    for (i = 0; i < 4; i++) 
	{
        cout << "bPtr[" << i << "] = " << *(bPtr+i) << "\n";
    }
    cout << "\nPointer/offset notation where "<< "the pointer is the array name\n";
    for (offset = 0; offset < 4; offset++) 
	{
        cout << "*(b + " << offset << ") = " << *(b + offset) << "\n";
    }
    cout << "\nPointer/offset notation\n";
    for (offset = 0; offset < 4; offset++) {
        cout << "*(bPtr + " << offset << ") = " << *(bPtr + offset) << "\n";
    }
    return 0;
}
