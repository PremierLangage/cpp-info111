/// BEGIN HIDDEN
#include <iostream>
using namespace std;
#include "randomization.h"

CONST I1 = RANDOM_INT(0, 7);
CONST I2 = RANDOM_INT(8, 15);


int main() {
/// END HIDDEN
    int X, Y, Z;
    X = I1;
    Y = I2;

    Z = X;
    X = Y;
    Y = Z;
    int r = Y;
/// BEGIN HIDDEN    
    cout << r << endl;
    return 0;
}
/// Objectif Pédagogique : échange de variable correct.
/// END HIDDEN
