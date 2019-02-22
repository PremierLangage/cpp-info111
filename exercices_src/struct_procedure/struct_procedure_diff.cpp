#include <iostream>

using namespace std;

/// BEGIN HIDDEN
#include "randomization.h"
CONST R1 = RANDOM_INT(-2, 5);
CONST R2 = RANDOM_INT(-2, 5);
CONST R3 = RANDOM_INT(-2, 5);
CONST I1 = RANDOM_INT(-2, 5);
CONST I2 = RANDOM_INT(-2, 5);
CONST I3 = RANDOM_INT(-2, 5);
/// END HIDDEN

struct cpx {
    double real;
    double img;
};

void diff(cpx x, cpx y, cpx &z) {
    z.real = x.real - y.real;
    z.img = x.img - y.img;
}

void multiply(cpx x, cpx y, cpx &z) {
    z.real = x.real * y.real - (x.img * y.img);
    z.img = x.real * y.img + x.img * y.real;
}

int main() {
    cpx X = { R1, I1 };
    cpx Y = { R2, I2 };
    cpx Z = { R3, I3 };

    diff(Y, Z, X);

    multiply(X, Y, Z);

    cout << Z.real << " " << Z.img << endl;
}
