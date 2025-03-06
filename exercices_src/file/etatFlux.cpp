/// BEGIN HIDDEN
#include <iostream>
#include <sstream>
using namespace std;

CONST C1 = RANDOM_INT(-2, 2);
CONST C2 = RANDOM_INT(-2, 2);

int main() {
/// END HIDDEN
    istringstream flux("C1.01 C2.02");
    int I1, I2;
    flux >> I1;
    if ( flux ) {
        cout << "A" << endl;
    } else {
        cout << "B" << endl;
    }
    flux >> I2;
    if ( flux ) {
        cout << "A" << endl;
    } else {
        cout << "B" << endl;
    }
/// BEGIN HIDDEN
    return 0;
}
/// END HIDDEN
