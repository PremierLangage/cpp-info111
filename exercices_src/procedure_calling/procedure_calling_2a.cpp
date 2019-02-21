#include <iostream>

using namespace std;

/// BEGIN HIDDEN
#include "randomization.h"
CONST I1 = RANDOM_INT(2, 5);
CONST I2 = RANDOM_INT(2, 5);
CONST I3 = RANDOM_INT(2, 5);
/// END HIDDEN

void g(int VALOUREF X, int VALOUREF Y) {
    X = X + Y;
}

void f(int VALOUREF X, int VALOUREF Y) {
    X = X + I1;
    g(X, Y);
}

int main() {
    int X = I2;
    int Y;
    Y = X + I3;
    f(X, Y);
    cout << X << endl;
    return 0;
}
