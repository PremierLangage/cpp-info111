/// BEGIN HIDDEN
#include <iostream>
#include "randomization.h"
using namespace std;

CONST I1 = RANDOM_INT(1, 5);
CONST I2 = RANDOM_INT(1, 3);
CONST I3 = RANDOM_INT(1, 7);

int main () {
/// END HIDDEN
    int r;
    r = (I2 PLUSOUMOINS I1) * I3;
/// BEGIN HIDDEN
    cout << r << endl;
}
/// Objectif Pédagogique : priorité des opérations.
/// END HIDDEN
