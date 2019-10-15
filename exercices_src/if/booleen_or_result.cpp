/// BEGIN HIDDEN
#include <iostream>
#include "randomization.h"
using namespace std;

CONST I1 = RANDOM_INT(-1, 4);

int main() {
/// END HIDDEN
    int x = I1;
    string r;
    if ( x < 0 or x > 2 ) {
        r = "oui";
    } else {
        r = "non";
    }
/// BEGIN HIDDEN
    cout << r << endl;
    return 0;
}
/// END HIDDEN
