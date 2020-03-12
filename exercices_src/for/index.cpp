/// BEGIN HIDDEN
/// Objectif Pédagogique: modification (volontaire???) du compteur dans la boucle
#include <iostream>
#include "randomization.h"
using namespace std;

CONST I1 = RANDOM_INT(1, 7);
CONST I2 = I1 + RANDOM_INT(2, 6);

int main () {
/// END HIDDEN
    for ( int i = I1; i <= I2 ; i = i + 1 ) {
        cout << i << endl;
        i = i + 1;
    }
/// BEGIN HIDDEN
    return 0;
}
/// END HIDDEN
