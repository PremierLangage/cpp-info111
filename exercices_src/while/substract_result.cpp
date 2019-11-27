/// BEGIN HIDDEN
#include <iostream>
#include "randomization.h"
using namespace std;

CONST I1 = RANDOM_INT(30, 57);
CONST I2 = RANDOM_INT(5, 10);

int main () {
/// END HIDDEN
    int r = I1;
    while (r > I2) {
        r = r - I2;
    }
/// BEGIN HIDDEN
    cout << r << endl;
    return 0;
}
/// END HIDDEN
