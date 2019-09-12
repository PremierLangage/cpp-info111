/// BEGIN HIDDEN
#include <iostream>
#include "randomization.h"
using namespace std;

CONST I1 = RANDOM_CHOICE(3, 5, 7);
CONST I2 = RANDOM_CHOICE(2, 4);
CONST I3 = RANDOM_CHOICE(16, 18, 22, 32);

int main () {
/// END HIDDEN
    int X, Y;
    X = I3 % I1;
    Y = I3 % I2;
    cout << X << endl;
    cout << Y << endl;
/// BEGIN HIDDEN
}
/// END HIDDEN
