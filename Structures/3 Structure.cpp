#include <iostream>
#include <string>
using namespace std;
struct CrewMember 
{
    string name;
    string role;
    int bounty;
};
int main() 
{
    CrewMember luffy, zoro, nami, sanji;
    luffy.name = "Monkey D. Luffy";
    luffy.role = "Captain";
    luffy.bounty = 150000000;

    zoro.name = "Roronoa Zoro";
    zoro.role = "Swordsman";
    zoro.bounty = 32000000;

    nami.name = "Nami";
    nami.role = "Navigator";
    nami.bounty = 66000000;

    sanji.name = "Sanji";
    sanji.role = "Cook";
    sanji.bounty = 77000000;

    cout << "Straw Hat Pirate Crew Member:" << endl;
    cout << "Name: " << luffy.name << endl;
    cout << "Role: " << luffy.role << endl;
    cout << "Bounty: " << luffy.bounty << " Berries" << endl;

    cout << "Straw Hat Pirate Crew Member:" << endl;
    cout << "Name: " << zoro.name << endl;
    cout << "Role: " << zoro.role << endl;
    cout << "Bounty: " << zoro.bounty << " Berries" << endl;

    cout << "Straw Hat Pirate Crew Member:" << endl;
    cout << "Name: " << nami.name << endl;
    cout << "Role: " << nami.role << endl;
    cout << "Bounty: " << nami.bounty << " Berries" << endl;

    cout << "Straw Hat Pirate Crew Member:" << endl;
    cout << "Name: " << sanji.name << endl;
    cout << "Role: " << sanji.role << endl;
    cout << "Bounty: " << sanji.bounty << " Berries" << endl;
    return 0;
}
