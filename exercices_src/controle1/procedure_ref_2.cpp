#include <iostream>

using namespace std;

/// BEGIN HIDDEN
#include "randomization.h"
CONST I0 = RANDOM_INT(2, 10);
/// END HIDDEN

void change(int &Y) {
    Y = Y PLUSOUMOINS 1;
}

int main() {
    int X = I0;
    for (int i = 1; i <= 2; i++) {
        change(X);
    }
    cout << X << endl;
}


