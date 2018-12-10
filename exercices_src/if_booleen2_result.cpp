// BEGIN HIDDEN
#include <iostream>
#include "randomization.h"
using namespace std;

int main() {
// END HIDDEN
    int x = CI4;
    string r;
    if ( x < 0 or x > 2 ) {
        r = "oui";
    } else {
        r = "non";
    }
// BEGIN HIDDEN
    cout << r << endl;
    return 0;
}
// END HIDDEN
