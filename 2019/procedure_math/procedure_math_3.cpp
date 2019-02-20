#include <iostream>

using namespace std;

/// BEGIN HIDDEN
#include "randomization.h"
CONST I = RANDOM_INT(4,10);
/// END HIDDEN

void Blaise(int &acc, int n) {
    acc = n * (n PLUSOUMOINS 1) / 2;
}

int main() {
    int prod;

    Blaise(prod, 5);
    cout << prod << endl;

    return 0;
}
