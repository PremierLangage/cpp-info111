/// BEGIN HIDDEN
#include <iostream>
#include "randomization.h"
using namespace std;

CONST I1 = RANDOM_INT(1, 7);
CONST I2 = RANDOM_INT(10, 16);

int main () {
/// END HIDDEN
    for ( int i = I1; i <= I2 ; i = i + 1 ) {
        cout << i << endl;
        i = i + 1;
    }
/// BEGIN HIDDEN
    return 0;
}
/// Objectif Pédagogique : modification de la variable dans la boucle
/// END HIDDEN
