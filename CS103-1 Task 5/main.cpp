//
//  CS103-1 :: Task 5
//
//  Created by Thierry Gibbons.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


// ----------
// Functions
// ----------

/*
Define functions for a square & triangle without any  argument and without return type.
*/

// draw square
void square() {
    int size = 5;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// draw triangle
void triangle() {
    int size = 5;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

/*
Define a function called rectangle with arguments and without return type.
Pass height ad width as arguments to the function.
*/

// draw rectangle
void rectangle(int height, int width) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

/*
Define one more function called calculate score with an argument and with the return value.
For each right answer, increase the score by 10. Return the score to the calling place.
*/

//score
int calculateScore(int &score, bool point) {
    if (point) {
        score += 10;
    }
    return score;
}

// ----------
// Main
// ----------
int main() {
    /*
    Display Main Menu with Play, Final Score, and Exit.
    */
   cout << "chur" << endl;

    int score = 0;
    int menuSelection;
    while (true) {
        // main menu
        cout << "Enter the number you would like to select" << endl;
        cout << "1) Play        Final Score: " << score << "\n2) Exit" << endl;
        cin >> menuSelection;

        switch (menuSelection) {
            case 1: {   //  Play
                /*
                Play option should call any one of the shapes randomly and display it.
                */
                srand(time(0)); //  Seed the random number generator with the current time
                int randomShape = rand() % 3 + 1;   // Generate a random number between 1 and 3
                switch (randomShape) {
                    case 1:
                        rectangle(5, 15);
                        break;
                    case 2:
                        triangle();
                        break;
                    case 3:
                        square();
                        break;
                }
                cout << "Guess the shape:\na. Rectangle\nb. Triangle\nc. Square\nd. None of the above" << endl;
                char guess;
                cin >> guess;

                if (randomShape == 1 && guess == 'a') {
                    cout << "Correct!" << endl;
                    score = calculateScore(score, true);
                } else if (randomShape == 2 && guess == 'b') {
                    cout << "Correct!" << endl;
                    score = calculateScore(score, true);
                } else if (randomShape == 3 && guess == 'c') {
                    cout << "Correct!" << endl;
                    score = calculateScore(score, true);
                } else {
                    cout << "Incorrect. The correct answer was ";
                    if (randomShape == 1) {
                        cout << 'a';
                    } else if (randomShape == 2) {
                        cout << 'b';
                    } else {
                        cout << 'c';
                    }
                    cout << "." << endl;
                }
                break;
            }
            case 2: //  Exit
                cout << "Exiting Program" << endl;
                return 0;
            default:
                cout << "Invalid selection. Please try again." << endl;
                break;
        }
        break;
    }


    return 0;
}