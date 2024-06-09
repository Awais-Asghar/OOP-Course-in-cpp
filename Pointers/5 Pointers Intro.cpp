#include <iostream>
using namespace std;
int main()
{
    int nasir, younis, afridi, haris;
    int* mazhar;

    afridi = 28;
    nasir = 0;
    younis = nasir;
    
    mazhar = &nasir;
    *mazhar = 21;
    haris = *mazhar;
    int &ref = afridi;
    
    cout << "afridi = " << afridi << endl;
    cout << "afridi = " << &ref << endl; // &ref prints the address of afridi
    cout << "afridi = " << ref << endl; // ref prints the value of afridi
    cout << "nasir = " << nasir << endl;
    cout << "younis = " << younis << endl;
    cout << "haris = " << haris << endl;
    cout << "Mazhar= " <<*mazhar  << endl;
    return 0;
}
