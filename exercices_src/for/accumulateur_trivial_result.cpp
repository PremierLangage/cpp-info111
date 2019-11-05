/// BEGIN HIDDEN
#include <iostream>
#include "randomization.h"
using namespace std;

CONST I1 = RANDOM_INT(1, 7);
CONST I2 = RANDOM_INT(3, 6);

int main () {
/// END HIDDEN
    int r = I1;
    for ( int i = 1; i <= I2 ; i = i + 1 ) {
        r = r + i;
    }
/// BEGIN HIDDEN
    cout << r << endl;
    return 0;
}
/// END HIDDEN
