/// BEGIN HIDDEN
#include <iostream>

using namespace std;

#include "randomization.h"
CONST I = RANDOM_INT(2, 10);
CONST J = RANDOM_INT(-10, 10);
CONST K = RANDOM_INT(-10, 10);
/// END HIDDEN

void change(int &X, int Y) {
    X = X PLUSOUMOINS Y;
}

int main() {
    int X = I;
    int Y = J;
    change(X, K);
    cout << X << endl;
}
