#include<iostream>
using namespace std;
class A {
    protected:
        string name="hey";
        int me=5;
    public:
         virtual  void display(){ 
            cout<<"Hi, I am a base class."<<endl;
        }
};
class B : public A {
        public:
            void display(){
                cout<<"Hi, I am a derived class."<<endl;
            }

};
int main(){  
    A* a;
    a= new B();
    a->display();
    return 0;
}
