#include <iostream>
using namespace std;

void inputArray(int arr[], int size){
    cout << "Enter " << size << " integers:" << endl;
    for (int i = 0; i < size; i++) 
	{
        cin >> arr[i];
    }
}
void printArray(int arr[], int size) {
    cout << "Array elements:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() 
{
    const int s = 10;
    int myArray[s];
    inputArray(myArray, s);
    printArray(myArray, s);
    return 0;
}
