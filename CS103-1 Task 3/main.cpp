//
//  CS103-1 :: Task 3
//
//  Created by Thierry Gibbons.
//

#include <iostream>

using namespace std;

// ----------
// Main
// ----------
int main() {

    // set matrix values
    int a[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
    int b[3][3] = { {9,8,7},{6,5,4},{3,2,1} };
    int c[3][3];

    // multiply the matrices and multiply that by 3
    int i, j;

    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            c[i][j] = (a[i][j] * b[i][j])*3;
        }
    }

    // Result
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++)
            cout << c[i][j] << " ";
        cout<<endl;
    }

    return 0;
}
