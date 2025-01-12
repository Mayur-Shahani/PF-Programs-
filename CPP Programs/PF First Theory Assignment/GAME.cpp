#include <iostream>
using namespace std;

int main() {
    int mainChoice, subChoice;

    
    cout << "Game Control Menu:" << endl;
    cout << "1. Start Game" << endl;
    cout << "2. Settings" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter your choice (1-3): ";
    cin >> mainChoice;

    
    switch (mainChoice) {
        case 1:
            cout << "Starting the game..." << endl;
            
            break;

        case 2:
            cout << "Settings Menu:" << endl;
            cout << "1. Audio Settings" << endl;
            cout << "2. Video Settings" << endl;
            cout << "3. Gameplay Settings" << endl;
            cout << "Enter your choice (1-3): ";
            cin >> subChoice;

            
            switch (subChoice) {
                case 1:
                    cout << "Audio Settings..." << endl;
                    
                    break;
                case 2:
                    cout << "Video Settings..." << endl;
                  
                    break;
                case 3:
                    cout << "Gameplay Settings..." << endl;
                    
                    break;
                default:
                    cout << "Invalid choice in Settings Menu!" << endl;
                    break;
            }
            break;

        case 3:
            cout << "Exiting the game..." << endl;
            
            break;

        default:
            cout << "Invalid choice in Main Menu!" << endl;
            break;
    }

    return 0;
}

