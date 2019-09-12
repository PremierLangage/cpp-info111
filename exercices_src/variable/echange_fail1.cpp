/// BEGIN HIDDEN
#include <iostream>
using namespace std;
#include "randomization.h"

CONST I1 = RANDOM_INT(0, 7);
CONST I2 = RANDOM_INT(8, 15);


int main() {
/// END HIDDEN
    int a, b;
    a = I1;
    b = I2;

    a = b;
    b = a;

    cout << a << endl;
    cout << b << endl;
/// BEGIN HIDDEN
    return 0;
}
/// END HIDDEN
