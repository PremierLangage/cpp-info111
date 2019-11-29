/// BEGIN HIDDEN
#include <iostream>
#include "randomization.h"
using namespace std;

CONST I1 = RANDOM_INT(1, 7);
CONST I2 = RANDOM_INT(8, 16);

int main () {
/// END HIDDEN
    int X = 0;
    int i = 0;
    for (i = I1; i < I2 ; i = i + 1 ) {
        X = i;
    }
    cout << "i = " << i << endl;
    cout << "X = " << X << endl;
/// BEGIN HIDDEN
    return 0;
}
/// Objectif Pédagogique : condition de sortie de la boucle
/// END HIDDEN
