#include<iostream>
#include<string>
using namespace std;

void greet(string msg)
{
    cout<<msg;
}
int main()
{
    string a;
    cout<<"Enter a msg: ";
    cin>>a;
    greet(a);
}
