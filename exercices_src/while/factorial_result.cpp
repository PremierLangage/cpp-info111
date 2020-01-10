/// BEGIN HIDDEN
#include <iostream>
#include "randomization.h"
using namespace std;

CONST N0 = RANDOM_INT(3, 5);

int main () {
/// END HIDDEN
    int N, r;

    N = N0;
    r = 1;

    while (N > 0) {
        r = r * N;
        N = N - 1;
    }
/// BEGIN HIDDEN
    cout << r << endl;

    return 0;
}
/// END HIDDEN
