#include <iostream>
using namespace std;

/// BEGIN HIDDEN
#include "randomization.h"
CONST I = RANDOM_INT(2, 10);
CONST J = RANDOM_INT(2, 10);
/// END HIDDEN

int f(int x, int y) {
    x = x PLUSOUMOINS 1;
    return y PLUSOUMOINS 1;
}

int main() {
    int x, y;
    x = I;
    y = J;
    x = f(y, x);
    cout << x << ", " << y << endl;
}
