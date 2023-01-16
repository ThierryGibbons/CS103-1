//
//  CS103-1 :: Task 4
//
//  Created by Thierry Gibbons.
//

#include <iostream>

using namespace std;

// ----------
// Variables
// ----------
string word[14] = {
    "chair",
    "table",
    "floor",
    "couch",
    "door",
    "window",
    "fire",
    "bench",
    "shelf",
    "lamp",
    "rug",
    "curtains",
    "television",
    "painting"
};

// ----------
// Functions
// ----------

void drawLine() {
    int i;
    for(i=0; i<66; i++)
        cout << "-";
    cout << endl;
}

void drawHangman() {
    cout << "   ____\n  |    |\n  |    O\n  |   \\|/\n  |    |\n  |   / \\ " << "\n  |\n  |\n-----" << endl;
}

void drawInvertedman() {
    cout << "   ____\n  |    |\n  |   /|\\\n  |    |\n  |   /|\\\n  |    O" << "\n  |\n  |\n-----" << endl;
}

void drawWalkman() {
    cout << "       O\n      \\|/\n       |\n      / \\" << endl;
}


void game() {
    bool gameBool = true;
    char guess;
    int numGuess = 0;
    srand (time(0));
    string randomWord = word[rand() % 14];

    // random letter part
    int x = rand() % randomWord.length();
    char y = randomWord[x];
    randomWord[x] = '_';

    while (gameBool) {
        cout << "Guess the random letter in " << randomWord << " : ";
        cin >> guess;
        if(guess == y) {
            cout << "\nYour guess is correct" << endl;
            drawWalkman();
            gameBool = false;
            break;
        } else if (numGuess < 2) {
            cout << "Sorry, try again" << endl;
            numGuess++;
        } else {
            cout << "\n   Your guess is wrong" << endl;
            drawInvertedman();
            gameBool = false;
            break;
        }
    }
}
// ----------
// Main
// ----------
int main() {
    cout << "Welcome to play hangman. This game is to check your spelling skill" << endl;
    drawLine();
    drawHangman();
    game();

    return 0;

}