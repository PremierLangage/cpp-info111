/// BEGIN HIDDEN
#include <iostream>
#include "randomization.h"
using namespace std;

CONST I1 = RANDOM_CHOICE(3, 5, 7);
CONST I3 = RANDOM_CHOICE(1, 2, 4, 8, 11, 13, 16, 17, 19, 22);

int main () {
/// END HIDDEN
    int r;
    r = I3 % I1;
/// BEGIN HIDDEN
    cout << r << endl;
}
/// Objectif Pédagigique : division entière.
/// END HIDDEN
