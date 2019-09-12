/// BEGIN HIDDEN
#include <iostream>
using namespace std;
#include "randomization.h"

CONST I1 = RANDOM_INT(0, 10);
CONST I2 = RANDOM_INT(0, 10);
  
int main () {
/// END HIDDEN
    int r, X, Y;
    X = I1;
    Y = X;
    X = I2;
    r = X;

/// BEGIN HIDDEN
    cout << r << endl;
    return 0;
}
/// END HIDDEN
