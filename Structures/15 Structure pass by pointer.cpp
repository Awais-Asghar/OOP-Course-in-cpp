#include <iostream>
#include <string>
using namespace std;
struct MusicTrack 
{
    string title;
    string artist;
    int duration;
};

void inputTrackData(MusicTrack* track) 
{
    cout << "Enter track title: ";
    cin >> track->title;
    cout << "Enter artist name: ";
    cin >> track->artist;
    cout << "Enter track duration (seconds): ";
    cin >> track->duration;
}

void displayTrackData(const MusicTrack* track) 
{
    cout << "Title: " << track->title << endl;
    cout << "Artist: " << track->artist << endl;
    cout << "Duration: " << track->duration << " seconds" << endl;
}
int main() 
{
    const int Size = 3;
    MusicTrack playlist[Size];
    for (int i = 0; i < Size; i++) 
	{
        cout << "Enter details for track " << i + 1 << ":" << endl;
        inputTrackData(&playlist[i]);
    }
    cout << "\n Playlist:" << endl;
    for (int i = 0; i < Size; i++) 
	{
        cout << "Track " << i + 1 << ":" << endl;
        displayTrackData(&playlist[i]);
        cout << endl;
    }
    return 0;
}
