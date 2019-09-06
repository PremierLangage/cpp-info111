/// BEGIN HIDDEN
#include <iostream>
#include "randomization.h"
using namespace std;
const THRESHOLD = RANDOM_INT(-1,1)
const RETURN_VALUE_TRUE = RANDOM_INT(4)
const RETURN_VALUE_FALSE = RANDOM_INT(4)
/// END HIDDEN
int f(int X) {
    if ( X < THRESHOLD ) {
        return RETURN_VALUE_TRUE;
    } else {
        return RETURN_VALUE_FALSE;
    }
}
/// BEGIN HIDDEN
CONST int INPUT = RANDOM_INT(-3, 3);
int main() {
    cout << f(INPUT) << endl;
    return 0;
}
/// END HIDDEN
