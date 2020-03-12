/// BEGIN HIDDEN
/// Objectif Pédagogique : accumulateur avec boucle for
#include <iostream>
#include "randomization.h"
using namespace std;

CONST RINIT = RANDOM_INT(1, 7);
CONST IMAX = RANDOM_INT(1, 4);

int main () {
/// END HIDDEN
    int r = RINIT;
    for ( int I = 1; I <= IMAX ; I = I + 1 ) {
        r = r + I;
    }
/// BEGIN HIDDEN
    cout << r << endl;
    return 0;
}
/// END HIDDEN


