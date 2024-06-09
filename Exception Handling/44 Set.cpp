#include<iostream>
#include<set>
using namespace std;

int main() {
    set<int> mySet;

    // Create: Inserting elements into the set
    mySet.insert(5);
    mySet.insert(10);
    mySet.insert(3);

    // Read: Accessing elements
    cout << "Reading elements:" << endl;
    for (const int& value : mySet) {
        cout << value << endl;
    }

    // Update: Not applicable for sets as elements are immutableS
    // Delete: Removing elements
    mySet.erase(10); // Remove element 10

    cout << "\nAfter deletion:" << endl;
    for (const int& value : mySet) {
        cout << value << endl;
    }
    return 0;
}
