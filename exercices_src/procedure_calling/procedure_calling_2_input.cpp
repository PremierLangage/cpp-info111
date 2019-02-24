#include <iostream>

using namespace std;

/// BEGIN HIDDEN
#include "randomization.h"
CONST I1 = RANDOM_CHOICE(2, 4, 6, 8);
CONST I2 = RANDOM_CHOICE(2, 4, 6, 8);
CONST V1 = RANDOM_VALOUREF();
CONST V2 = RANDOM_VALOUREF();
CONST V3 = RANDOM_VALOUREF();
CONST V4 = RANDOM_VALOUREF();
/// END HIDDEN


void g(int V1 X, int V2 Y) {
    X = X + Y;
}

void f(int V3 X, int V4 Y) {
    X = X PLUSOUMOINS I1;
    g(X, Y);
}

int main() {
    int X;
    int Y;
    cin >> X;
    Y = X + I2;
    f(X, Y);
    cout << X << endl;
    return 0;
}
