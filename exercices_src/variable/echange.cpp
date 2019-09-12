/// BEGIN HIDDEN
#include <iostream>
using namespace std;

CONST I1 = RANDOM_INT(0, 7);
CONST I2 = RANDOM_INT(8, 15);


int main() {
/// END HIDDEN
    int X, Y, Z;
    X = I1;
    Y = I2;

    X = Z;
    Y = X;
    Z = Y;
    
    cout << x << endl;
    cout << y << endl;
/// BEGIN HIDDEN
    return 0;
}
/// END HIDDEN
