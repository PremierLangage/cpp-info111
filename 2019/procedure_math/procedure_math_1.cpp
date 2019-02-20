#include <iostream>

using namespace std;

/// BEGIN HIDDEN
#include "randomization.h"
CONST I = RANDOM_INT(4, 6);
/// END HIDDEN


void blourgh(int &acc, int n) {
    acc = 0;
    for (int i = n; i > 0; i--)
        acc += i;
}

int main() {
    int somme;
    blourgh(somme, I);
    cout << somme << endl;

    return 0;
}
