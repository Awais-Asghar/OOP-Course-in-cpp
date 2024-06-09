#include <iostream>
#include <string>
using namespace std;

class Player {
public:
    string name;
    int age;
    string team;
    double battingAverage = 0.0;
    double bowlingAverage = 0.0;
    int runsScored = 0;
    int matchesPlayed = 0;
    int wicketsTaken = 0;

    Player() {
        name = "";
        age = 0;
        team = "";
    }

    Player(string n, int a, string t) {
        name = n;
        age = a;
        team = t;
    }

    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Team: " << team << endl;
        cout << "Batting Average: " << battingAverage << endl;
        cout << "Bowling Average: " << bowlingAverage << endl;
        cout << "Runs Scored: " << runsScored << endl;
        cout << "Wickets Taken: " << wicketsTaken << endl;
    }

    void updateBattingStats(int runs, int matches) {
        runsScored += runs;
        matchesPlayed += matches;
        if (matchesPlayed > 0) {
            battingAverage = static_cast<double>(runsScored) / matchesPlayed;
        }
    }

    void updateBowlingStats(int wickets, int matches) {
        wicketsTaken += wickets;
        matchesPlayed += matches;
        if (matchesPlayed > 0) {
            bowlingAverage = static_cast<double>(wicketsTaken) / matchesPlayed;
        }
    }
};

int main() {
    int MAX_PLAYERS;

    cout << "How many players' data you want to add (1-11): ";
    cin >> MAX_PLAYERS;
    Player roster[MAX_PLAYERS];

    for (int i = 0; i < MAX_PLAYERS; i++) {
        string player_name;
        int player_age;
        string player_team;

        cout << "Enter the name of player: ";
        cin >> player_name;
        cout << "Enter the age of player: ";
        cin >> player_age;
        cout << "Enter the team name of player: ";
        cin >> player_team;

        Player newPlayer(player_name, player_age, player_team);

        int total_runs;
        int total_matches_batting;

        cout << "Enter the total runs of batting player: ";
        cin >> total_runs;
        cout << "Enter the total matches of batting player: ";
        cin >> total_matches_batting;

        int total_wickets;
        int total_matches_bowling;

        cout << "Enter the total wickets of bowling player: ";
        cin >> total_wickets;
        cout << "Enter the total matches of bowling player: ";
        cin >> total_matches_bowling;

        newPlayer.updateBattingStats(total_runs, total_matches_batting);
        newPlayer.updateBowlingStats(total_wickets, total_matches_bowling);

        roster[i] = newPlayer;
    }

    cout << "Initial Player Information and Stats:" << endl;
    for (int i = 0; i < MAX_PLAYERS; i++) {
        cout << "Player " << i << ":" << endl;
        roster[i].displayInfo();
        cout << endl;
    }

    int playerIndex;
    while (true) {
        cout << "Enter the index of the player you want to update stats for (0-"
             << MAX_PLAYERS - 1 << "), or -1 to exit: ";
        cin >> playerIndex;
        if (playerIndex == -1) {
            break;
        }
        if (playerIndex >= 0 && playerIndex < MAX_PLAYERS) {
            int newRuns, newWickets;
            cout << "Enter the new runs for this player: ";
            cin >> newRuns;
            cout << "Enter the new wickets for this player: ";
            cin >> newWickets;

            roster[playerIndex].updateBattingStats(newRuns, 1);
            roster[playerIndex].updateBowlingStats(newWickets, 1);

            cout << "Updated stats for player " << playerIndex << ":\n";
            roster[playerIndex].displayInfo();
            cout << endl;
        } else {
            cout << "Invalid index. Please enter a valid player index.\n";
        }
    }

    return 0;
}
