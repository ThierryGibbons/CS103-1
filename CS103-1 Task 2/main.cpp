//
//  CS103-1 :: Task 2
//
//  Created by Thierry Gibbons.
//

// ----------
// Includes
// ----------
#include <iostream>

using namespace std;

// ----------
// Array
// ----------
int sumNegList(int array[], int size) {
    int sum = 0;    // set new integer called sum to 0

    // cycle through the array
    for (int i = 0; i < size; i++) {

        // Input
        cout << "[" << i+1 << "]: ";
        cin >> array[i];

        if (array[i] > 0) { // if value in array is positive:
            sum += array[i];    // add value to total sum
        }
    }
    return sum;

}

// ----------
// Main
// ----------
int main() {

    int arraySize;  // new integer named arraySize

    //  Input
    cout << "Array Size: ";
    cin >> arraySize;

    cout << "Enter numbers into an array.\n";

    int* arrayPoint = new int[arraySize];   // allocate new pointer named arrayPoint the size of arraySize
    int total = sumNegList(arrayPoint, arraySize);  // calculate sum of non-negative values in list

    // output total
    cout << total << endl;

    //  Clear memory
    delete[] arrayPoint;

    return 0;
}
