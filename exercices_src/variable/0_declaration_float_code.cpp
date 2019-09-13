/// BEGIN HIDDEN
#include <iostream>
#include "randomization.h"
using namespace std;

CONST I1 = RANDOM_INT(1,10);

int main() {
/// END HIDDEN
  /* Déclarez une variable réelle r et affectez lui la valeur I1. */
/// BEGIN SOLUTION
    float r = I1;
/// END SOLUTION
/// BEGIN HIDDEN
    cout << r << endl;
    return 0;
}
/// Objectif Pédagogique : savoit déclarer une variable (autre que int).
/// END HIDDEN
