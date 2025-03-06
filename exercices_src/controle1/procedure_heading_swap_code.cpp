/// BEGIN HIDDEN
#include <iostream>
#include "randomization.h"
using namespace std;

CONST I1 = RANDOM_INT(2, 5);
CONST I2 = RANDOM_INT(6, 10);
/// END HIDDEN

/* Écrivez l'en-tête de la fonction "swap" comme il faut 
 * pour que les ASSERT soient validés */
/// BEGIN SOLUTION
void swap(int &Y, int &Z)
/// END SOLUTION
{
    int tmp = Y;
    Y = Z;
    Z = tmp;
}

int main() {
    int X = I1;
    int Y = I2;
    swap(X, Y);
    ASSERT(X == I2);
    ASSERT(Y == I1);
    return 0;
}
