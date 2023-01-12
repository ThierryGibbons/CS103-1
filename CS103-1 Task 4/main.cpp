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
void game() {
    // string blank = word[rand() % 14];

    // cout << "Hangman\n--------" << endl;

    // cout << randomWord << endl;
}

void drawLines() {}

void drawHangman() {}

void drawWalkman() {}

void drawInvertedman() {}

// ----------
// Main
// ----------
int main() {
    // Variables
    srand (time(0));
    int i;
    string randomWord = word[rand() % 14];

    cout << randomWord << endl;

}
