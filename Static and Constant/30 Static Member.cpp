#include <iostream>
using namespace std;

void Static_1() {
    static int number_of_times = 0;
    for (int x = 0; x < 10; x++) {
        for (int y = 0; y < 10; y++) {
            number_of_times++;
            cout << number_of_times << endl;
        }
    }
}

void Static_2() {
    for (int x = 0; x < 10; x++) {
        for (int y = 0; y < 10; y++) {
            static int number_of_times = 0;
            number_of_times++;
            cout << number_of_times << endl;
        }
    }
}

void Static_3() {

    for (int x = 0; x < 10; x++) {
        for (int y = 0; y < 10; y++) {
        	static int number_of_times;
            number_of_times = 0;
            number_of_times++;
            cout << number_of_times << endl;
        }
    }
}

int main() {
    Static_1();
    Static_2();
    Static_3();
    return 0;
} 
