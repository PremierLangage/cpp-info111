#include <iostream>

using namespace std;

/// BEGIN HIDDEN
#include "randomization.h"
CONST I1 = RANDOM_INT(2, 5);
CONST I2 = RANDOM_INT(6, 10);
/// END HIDDEN
#define ASSERT(test) if (!(test)) cout << "Test failed in file " << __FILE__ \
                                       << " line " << __LINE__ << ": " #test << endl


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
