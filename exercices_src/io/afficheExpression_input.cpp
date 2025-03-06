/// BEGIN HIDDEN
#include <iostream>
#include "randomization.h"
using namespace std;

CONST CI = RANDOM_INT(-5, 5);

int main() {
/// END HIDDEN
    int X;
    cin >> X;
    cout << X PLUSOUMOINS CI << endl;
/// BEGIN HIDDEN
    return 0;
}
/// END HIDDEN
