#include <iostream>
#include <string>
using namespace std;
struct MusicTrack 
{
    string title;
    string artist;
    int duration;
};
void displayTrackData(MusicTrack track) 
{
    cout << "Title: " << track.title << endl;
    cout << "Artist: " << track.artist << endl;
    cout << "Duration: " << track.duration << " seconds" << endl;
}
int main() 
{
    const int Size = 3;
    MusicTrack playlist[Size];
    
    playlist[0] = {"Song 1", "Artist 1", 180};
    playlist[1] = {"Song 2", "Artist 2", 210};
    playlist[2] = {"Song 3", "Artist 3", 240};
    
    cout << "Playlist:" << endl;
    for (int i = 0; i < Size; i++)
	{
        cout << "Track " << i + 1 << ":" << endl;
        displayTrackData(playlist[i]);
        cout << endl;
    }
    return 0;
}
