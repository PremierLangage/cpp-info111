#include <iostream>

using namespace std;

/// BEGIN HIDDEN
#include "randomization.h"
CONST I1 = RANDOM_INT(2, 3);
CONST I2 = RANDOM_INT(2, 5);
CONST V1 = RANDOM_VALOUREF();
CONST V2 = RANDOM_VALOUREF();
/// END HIDDEN

void g(int V1 X) {
    X = X * I1;
}

void f(int V2 X) {
    X = X PLUSOUMOINS I2;
    g(X);
}

int main() {
    int X;
    cin >> X;
    f(X);
    cout << X << endl;
    return 0;
}
