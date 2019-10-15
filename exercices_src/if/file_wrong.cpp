/// BEGIN HIDDEN
#include <iostream>
#include "randomization.h"
using namespace std;

CONST I1 = RANDOM_INT(1, 7);

int main() {
/// END HIDDEN
    int x = I1;
    if ( x > 0 ) {
        cout << "positif" << endl;
    } if (x == 0) {
        cout << "nul" << endl;
    } else {
        cout << "negatif" << endl;
    }
/// BEGIN HIDDEN
    return 0;
}
/// END HIDDEN
