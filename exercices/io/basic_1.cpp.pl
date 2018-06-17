template=/template/wims_input.pl
topic=io
code==
/// BEGIN HIDDEN
#include "randomization.h"
#include <iostream>
using namespace std;

int main() {
    /// END HIDDEN
    int X;

    cin >> X;
    cout << X + CI1 << endl;
    /// BEGIN HIDDEN
    return 0;
}
/// END HIDDEN
==
