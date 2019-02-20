#include <iostream>

using namespace std;

/// BEGIN HIDDEN
#include "randomization.h"
CONST I2 = RANDOM_INT(2, 5);
/// END HIDDEN

void g(int X) {
    X = X * 2;
}

void f(int &X) {
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
