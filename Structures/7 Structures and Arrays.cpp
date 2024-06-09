#include <iostream>
#include <string>
using namespace std;
struct CrewMember {
    string name;
    string role;
    int bounty;
};

int main() 
{
    const int Size = 4;
    CrewMember strawHatCrew[Size];
    strawHatCrew[0].name = "Monkey D. Luffy";
    strawHatCrew[0].role = "Captain";
    strawHatCrew[0].bounty = 150000000;

    strawHatCrew[1].name = "Roronoa Zoro";
    strawHatCrew[1].role = "Swordsman";
    strawHatCrew[1].bounty = 32000000;

    strawHatCrew[2].name = "Nami";
    strawHatCrew[2].role = "Navigator";
    strawHatCrew[2].bounty = 66000000;

    strawHatCrew[3].name = "Sanji";
    strawHatCrew[3].role = "Cook";
    strawHatCrew[3].bounty = 77000000;

    for (int i = 0; i < Size; ++i) 
	{
        cout << "Name: " << strawHatCrew[i].name << endl;
        cout << " Role: " << strawHatCrew[i].role << endl;
        cout << "Bounty: " << strawHatCrew[i].bounty << " Berries" << endl;
        cout << endl;
    }
    return 0;
}
