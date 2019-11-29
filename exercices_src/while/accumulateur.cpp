/// BEGIN HIDDEN
#include <iostream>
#include "randomization.h"
using namespace std;

CONST I1 = RANDOM_INT(5, 17);

int main () {
/// END HIDDEN
    int x, y;
    x = 0;
    y = 0;
    while ( x < I1 ) {
        x = x + 1;
        y = 1;
    }
    cout << x << ", " << y << endl;
/// BEGIN HIDDEN
}
/// END HIDDEN
