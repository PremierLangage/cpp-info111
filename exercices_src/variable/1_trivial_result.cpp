/// BEGIN HIDDEN
#include <iostream>
using namespace std;
#include "randomization.h"

CONST I1 = RANDOM_INT(0, 7);
CONST I2 = RANDOM_INT(8, 16);
  
int main () {
/// END HIDDEN
    int r, X, Y;
    X = I1;
    Y = X;
    X = I2;
    r = X + Y;

/// BEGIN HIDDEN
    cout << r << endl;
    return 0;
}
/// Objectif Pédagogique : comprendre que l'affectation X = Y ne lie pas X et Y (changer la valeur de X après affectation ne change pas celle de Y).
/// END HIDDEN
