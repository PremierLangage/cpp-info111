/// BEGIN HIDDEN
#include <iostream>
#include "randomization.h"
using namespace std;

CONST I1 = RANDOM_INT(3, 7);

int main () {
/// END HIDDEN
    int n, r;

    n = I1;
    r = 1;

    while (n > 0) {
        r = r * n;
        n = n - 1;
    }
/// BEGIN HIDDEN
    cout << r << endl;

    return 0;
}
/// END HIDDEN

