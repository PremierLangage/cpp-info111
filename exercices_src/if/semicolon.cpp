/// BEGIN HIDDEN
#include <iostream>
#include "randomization.h"
using namespace std;

CONST I1 = RANDOM_INT(2, 8);
CONST I2 = RANDOM_INT(-4, 1);


int main() {
/// END HIDDEN
    int x = I1;
    if ( x < I2 ); {
        cout << "Bonjour!" << endl;
    }
    cout << "Au revoir." << endl;
/// BEGIN HIDDEN
    return 0;
}
/// END HIDDEN

