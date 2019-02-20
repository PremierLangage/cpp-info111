#include <iostream>
#include <math.h>

using namespace std;

/// BEGIN HIDDEN
#include "randomization.h"
CONST I = RANDOM_CHOICE(7, 12, 15, 19);
/// END HIDDEN

bool foo(int n) {
    if (n % 2 == 0) return true;
    for (int d = 3; d <= 5; d = d + 2)
        if (n % d == 0)
            return false;
    return true;
}

int main() {
    if (foo(I))
        cout << "Oui" << endl;
    else
        cout << "Non" << endl;

    return 0;
}
