#include <iostream>
#include <string>
using namespace std;

class GameCharacter { 
public:
    virtual void displayInfo() {
        cout << "Game Character" << endl;
    }
};
class Warrior : public GameCharacter { 
public:
    void displayInfo() override {
        cout << "Warrior: Strong and skilled in close combat." << std::endl;
    }
};
class Wizard : public GameCharacter { 
public:
    void displayInfo() override {
        cout << "Wizard: Master of arcane arts with powerful spells." << endl;
    }
};
class Archer : public GameCharacter { 
public:
    void displayInfo() override {
        cout << "Archer: Agile and deadly with long-range attacks." << endl;
    }
};

int main() 
{
    int num = 3; 
    GameCharacter* characters[num];
    characters[0] = new Warrior(); 
    characters[1] = new Wizard(); 
    characters[2] = new Archer();
    for (int i = 0; i < num; i++) {
        characters[i]->displayInfo();
    }
    for (int i = 0; i < num; i++) {
        delete characters[i];
    }
    return 0;
}
