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
    int X, Y;
    X = I1;
    Y = I2;
    /** Echangez les valeurs de X et Y en utilisant uniquement 
     *  des affectations du type a = b où a et b 
     *  sont des noms de variables, et en déclarant un nouvelle variable.
     */
    /// BEGIN HIDDEN
    X += I3;
    Y += I4;
    /// END HIDDEN
    /// BEGIN SOLUTION
    int Z = X;
    X = Y;
    Y = Z;
    /// END SOLUTION
/// BEGIN HIDDEN
    cout << X << endl;
    cout << Y << endl;
    return 0;
}
/// Objectif Pédagogique : comprendre la difference entre valeur et nom d'une variable de type string.
/// END HIDDEN
