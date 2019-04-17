/// BEGIN HIDDEN
#include <iostream>
#include "randomization.h"
using namespace std;

int main() {
/// END HIDDEN
    int r;
    int X = CI1;
    if ( X < 0 ) {
        r = CI2;
    } else {
        r = CI3;
    }
/// BEGIN HIDDEN
    cout << r << endl;
    return 0;
}
/// END HIDDEN
