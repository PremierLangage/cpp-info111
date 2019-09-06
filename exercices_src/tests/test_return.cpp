/// BEGIN HIDDEN
#include <iostream>
#include "randomization.h"
using namespace std;
/// END HIDDEN
int f(int X) {
    if ( X < RANDOM_INT(-1,1) ) {
        return RANDOM_INT(4);
    } else {
        return RANDOM_INT(4);
    }
}
/// BEGIN HIDDEN
CONST int INPUT = RANDOM_INT(-3, 3);
int main() {
    cout << f(INPUT) << endl;
    return 0;
}
/// END HIDDEN
