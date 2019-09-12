/// BEGIN HIDDEN
#include <iostream>
#include "randomization.h"
using namespace std;

CONST I1 = RANDOM_INT(1, 7);
CONST I2 = RANDOM_INT(5, 12);
CONST I3 = RANDOM_INT(1, 7);

int main () {
/// END HIDDEN
    int X, Y, Z;
    X = I3 + I1;
    Y = I3 - I2;
    Z = (I2 + Y) / X;
    cout << Z << endl;
/// BEGIN HIDDEN
}
/// END HIDDEN
