/// BEGIN HIDDEN
#include <iostream>
#include "randomization.h"
using namespace std;

CONST I2 = RANDOM_INT(3, 7);

int main() {
/// END HIDDEN
    int n, r;

    n = 5;
    r = 1;

    for ( int k = 1; k <= n; k++ ) {
        r = r * k;
    }
/// BEGIN HIDDEN
    cout << r << endl;
    return 0;
}
/// Objectif Pédagigique : comprendre une factorielle avec une boucle for
/// END HIDDEN
