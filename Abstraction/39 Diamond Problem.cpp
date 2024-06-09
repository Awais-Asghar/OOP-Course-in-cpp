#include<iostream>
using namespace std;

class Animal {
    public:
        void makesound() {
            cout << "Animal sound\n";
        }
};

class Dog : public Animal {
    public:
        void makesound() {
            cout << "Woof!\n";
        }
};

class Cat : public Animal {
    public:
        void makesound() {
            cout << "Meow!\n";
        }
};

class DogCat : public Dog, public Cat {
    public:
        void sound() {
            // makeSound(); // This line will cause an error due to ambiguity
            Dog::makesound(); // Refers to Dog's makeSound()
            Cat::makesound(); // Refers to Cat's makeSound()
        }
};

int main(){

    DogCat dc;
    dc.sound();

    return 0;
}
