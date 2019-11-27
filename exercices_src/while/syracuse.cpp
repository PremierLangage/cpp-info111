/// BEGIN HIDDEN
#include <iostream>
#include "randomization.h"
using namespace std;

/// END HIDDEN
int main() {
    int i = 6;
    while ( i != 1 ) {
        cout << i << endl;
        if ( i % 2 == 1 ) {
            i = 3 * i + 1;
        } else {
            i = i / 2;
        }
    }
    return 0;
}
