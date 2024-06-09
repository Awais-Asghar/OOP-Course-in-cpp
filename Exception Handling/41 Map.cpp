#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<int, string> myMap;
    // Create: Inserting key-value pairs
    myMap[1] = "Apple";
    myMap[2] = "Banana";
    myMap[3] = "Orange";
    // Read: Accessing elements
	cout << "Reading elements:" << endl;
	for (int i = 1; i <= myMap.size(); ++i) 
	{
    cout << i<< ": " << myMap[i] << endl;
	}
    // Update: Modifying elements
    myMap[2] = "Grapes"; // Update value for key 2

    cout << "\nAfter updating:" << endl;
	for (int i = 1; i <= myMap.size(); ++i) 
	{
    cout << i << ": " << myMap[i] << endl;
	} 
    // Delete: Removing elements
    myMap.erase(3); // Remove key 3 and its value

    cout << "\nAfter deletion:" << endl;
	for (int i = 1; i <= myMap.size(); ++i) 
	{
    cout << i << ": " << myMap[i] << endl;
	}
    return 0;
}
