/// BEGIN HIDDEN
#include <iostream>
#include "randomization.h"
using namespace std;

CONST C1 = RANDOM_INT(-5, 5);
CONST C2 = RANDOM_INT(-5, 5);
CONST C3 = RANDOM_INT(-5, 5);

int main() {
/// END HIDDEN
    int r;
    int X = C1;
    if ( X < 0 ) {
        r = C2;
    } else {
        r = C3;
    }
/// BEGIN HIDDEN
    cout << r << endl;
    return 0;
}
/// END HIDDEN
