/// BEGIN HIDDEN
#include <iostream>
#include "randomization.h"
using namespace std;

CONST I1 = RANDOM_INT(1,6);
CONST I2 = RANDOM_INT(1,6);
CONST I3 = RANDOM_INT(1,6);
CONST I4 = RANDOM_INT(1,6);
CONST I5 = RANDOM_INT(1,6);
CONST I6 = RANDOM_INT(1,6);
CONST I7 = RANDOM_INT(1,6);
CONST I8 = RANDOM_INT(1,6);

/// END HIDDEN

struct obif {
    int a;
    int b;
    int c;
    int d;
};

obif step(obif m) {
    obif nouveau;
    nouveau.a = m.b + I1
    nouveau.b = m.c + I2
    nouveau.c = m.d + I3
    nouveau.d = I4
    return nouveau;
}

int main() {
    obif truc = {I5, I6, I7, I8};
    for (int p = 3; p > -3; p = p - 2) {
        truc = step(truc);
    }
    cout << truc.b << endl;
    return 0;
}
