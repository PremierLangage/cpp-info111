/// BEGIN HIDDEN
#include <iostream>
using namespace std;
#include "randomization.h"

CONST I1 = RANDOM_INT(0, 7);
CONST I2 = RANDOM_INT(8, 15);
CONST I3 = RANDOM_INT(50, 100);
CONST I4 = RANDOM_INT(500, 1000);

int main() {
    /// END HIDDEN
    int X, Y, Z;
    X = I1;
    Y = I2;
    /** Echangez les valeurs de X et Y en utilisant uniquement 
     *  des affectations du type `a = b` où `a` et `b` 
     *  sont des noms de variables, et en utilisant la variable Z.
     */
    /// BEGIN HIDDEN
    X += I3;
    Y += I4;
    /// END HIDDEN
    /// BEGIN SOLUTION
    Z = X;
    X = Y;
    Y = Z;
    /// END SOLUTION
    cout << X << endl;
    cout << Y << endl;
/// BEGIN HIDDEN
    return 0;
}
/// END HIDDEN
