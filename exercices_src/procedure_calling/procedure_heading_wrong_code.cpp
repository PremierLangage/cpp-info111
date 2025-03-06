/// BEGIN HIDDEN
#include <iostream>
#include "randomization.h"
using namespace std;

CONST I1 = RANDOM_INT(2, 5);
CONST I2 = RANDOM_INT(6, 10);
/// END HIDDEN

/* Écrivez l'en-tête de la fonction "toto" comme il faut 
 * pour que les ASSERT soient validés */
/// BEGIN SOLUTION
void toto(int Y, int &Z)
/// END SOLUTION
{
    Y++;
    Z = Y;
}

int main() {
    int X = I1;
    int Y = I2;
    toto(X, Y);
    ASSERT(X == I1);
    ASSERT(Y == I1 + 1);
    return 0;
}
