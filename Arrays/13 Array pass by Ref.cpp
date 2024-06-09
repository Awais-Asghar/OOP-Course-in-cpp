#include<iostream>
using namespace std;
void inputArray(int (&arr)[10])
{
    cout << "Enter 10 integers:" << endl;
    for (int i = 0; i < 10; i++) 
	{
        cin >> arr[i];
    }
}
void printArray(int (&arr)[10]) 
{
    cout << "Array elements:" << endl;
    for (int i = 0; i < 10; i++) 
	{
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int myArray[10];
    inputArray(myArray);
    printArray(myArray);
    return 0;
}
