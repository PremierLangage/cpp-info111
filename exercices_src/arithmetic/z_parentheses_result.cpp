/// BEGIN HIDDEN
#include <iostream>
#include "randomization.h"
using namespace std;

CONST I1 = RANDOM_INT(1, 5);
CONST I2 = RANDOM_INT(1, 7);
CONST I3 = RANDOM_INT(1, 5);

int main () {
/// END HIDDEN
    int I, J, K, N;
    I = I2 - I1;
    J = I3 + I2;
    K = I * J;
    N = I2 - I1 * I3 + I2;
    bool r = K == N;
/// BEGIN HIDDEN
    if (r) cout << "true" << endl;
    else cout << "false" << endl;
}
/// Objectif pédagogique : altérnative aux parenthèses.
/// END HIDDEN
