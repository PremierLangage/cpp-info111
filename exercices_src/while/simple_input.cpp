/// BEGIN HIDDEN
#include <iostream>
#include "randomization.h"
using namespace std;

CONST I1 = RANDOM_INT(2, 5);

int main() {
/// END HIDDEN
    int v = 1;
    int s;

    while (I1 * v < 42) {
        v = I1 * v;
    }

    cin >> s;
    cout << v + s << endl;

/// BEGIN HIDDEN
}
/// END HIDDEN
