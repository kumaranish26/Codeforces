#include <iostream>
#include <windows.h>
#include <mmsystem.h>
using namespace std;

// Link the Winmm.lib library
#pragma comment(lib, "winmm.lib")

using namespace std;

int main() {
    // 1. Specify the filename (Make sure this file exists in the folder!)
    // Using an 'L' prefix for wide character string support
    string songName = "Saiyaara .wav";
    string command = "open \"" + songName + "\" type waveaudio alias mySong";

    cout << "--- Simple C++ Music Player ---" << endl;

    // 2. Open the audio file
    mciSendStringA(command.c_str(), NULL, 0, NULL);

    int choice;
    while (true) {
        cout << "\n1. Play\n2. Pause\n3. Stop\n4. Exit\nChoose an option: ";
        cin >> choice;

        switch (choice) {
            case 1:
                mciSendStringA("play mySong", NULL, 0, NULL);
                cout << "Playing..." << endl;
                break;
            case 2:
                mciSendStringA("pause mySong", NULL, 0, NULL);
                cout << "Paused." << endl;
                break;
            case 3:
                mciSendStringA("stop mySong", NULL, 0, NULL);
                mciSendStringA("seek mySong to start", NULL, 0, NULL);
                cout << "Stopped." << endl;
                break;
            case 4:
                mciSendStringA("close mySong", NULL, 0, NULL);
                return 0;
            default:
                cout << "Invalid choice." << endl;
        }
    }

    return 0;
}