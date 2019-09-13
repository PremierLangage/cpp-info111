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

    X = Y;
    Z = X;
    Y = Z;
    
    cout << X << endl;
    cout << Y << endl;
/// BEGIN HIDDEN
    return 0;
}
/// Objectif Pédagogique : faire attention à l'ordre des instructions.
/// END HIDDEN
