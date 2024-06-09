#include <iostream>
using namespace std;

enum class Day {
    SUNDAY,    // 0
    MONDAY,    // 1
    TUESDAY,   // 2
    WEDNESDAY, // 3
    THURSDAY,  // 4
    FRIDAY,    // 5
    SATURDAY   // 6
};

int main() {
    
    Day today = Day::WEDNESDAY;
    
    cout << "Today is ";
    switch (today) {
        case Day::SUNDAY:
            cout << "Sunday";
            break;
        case Day::MONDAY:
            cout << "Monday";
            break;
        case Day::TUESDAY:
            cout << "Tuesday";
            break;
        case Day::WEDNESDAY:
            cout << "Wednesday";
            break;
        case Day::THURSDAY:
            cout << "Thursday";
            break;
        case Day::FRIDAY:
            cout << "Friday";
            break;
        case Day::SATURDAY:
            cout << "Saturday";
            break;
    }
    return 0;
}
