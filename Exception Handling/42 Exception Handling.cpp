#include <iostream>
#include <stdexcept>
using namespace std;

int main() 
	{
    try {
        int numerator = 10;
        int denominator = 0;
        if (denominator == 0)
		{
            throw "Division by zero error!";
        }
        int result = numerator / denominator;
        cout << "Result of division: " << result << endl;
    }
    catch (const char * e) {
        cout << "Exception caught: " << e << endl;
    }
    catch (...) 
	{
        cout << "Unknown exception caught." << endl;
    }
    return 0;
}
