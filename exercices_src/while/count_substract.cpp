/// BEGIN HIDDEN
#include <iostream>
#include "randomization.h"
using namespace std;

CONST I1 = RANDOM_INT(20, 37);
CONST I2 = RANDOM_INT(5, 10);

int main() {
/// END HIDDEN
    int n = I1;
    int i = 0;
    while (n > I2) {
        n = n - I2;
        i = i + 1;
    }
    cout << i << endl;
/// BEGIN HIDDEN
}
/// END HIDDEN

