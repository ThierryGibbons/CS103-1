//
//  CS103-1 :: Task 1
//
//  Created by Thierry Gibbons.
//

// ----------
// Initial
// ----------

//  Includes:
#include <iostream>

using namespace std;

// ----------
// Structs
// ----------

// Soccer Structure
struct
{
    int playerNum;
    float playerTopspeed;
    enum position {
        goalkeeper = 'g',
        midfielder = 'm',
        striker = 's',
        winger = 'w',
        defender = 'd'
    };
} soccer;

// ----------
// Main function
// ----------
int main() {

    char playerPosition;

// Input parameters
// ----------
    cout << "Player Number: ";
    cin >> soccer.playerNum;
    cout << "Player Top Speed: ";
    cin >> soccer.playerTopspeed;
    cout << "Player Position: ";
    cin >> playerPosition;

    cout << "\n-----\n" << endl;    // Divider

// Output Parameters
// ----------
    // Basics
    cout << "Player Number: " << soccer.playerNum << endl;
    cout << "Player Top Speed: " << soccer.playerTopspeed<< endl;

    // Position Output
    switch (playerPosition)
    {
        case soccer.goalkeeper:
            cout << "Player Position: Goalkeeper" << endl;
            break;
        case soccer.midfielder:
            cout << "Player Position: Midfielder" << endl;
            break;
        case soccer.striker:
            cout << "Player Position: Striker" << endl;
            break;
        case soccer.winger:
            cout << "Player Position: Winger" << endl;
            break;
        case soccer.defender:
            cout << "Player Position: Defender" << endl;
            break;

        default:
            break;
    }

}
