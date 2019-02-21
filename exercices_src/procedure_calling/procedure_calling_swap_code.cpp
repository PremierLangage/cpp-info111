#include <iostream>

using namespace std;

/// BEGIN HIDDEN
#include "randomization.h"
CONST I1 = RANDOM_INT(1, 4);
CONST I2 = RANDOM_INT(5, 9);
CONST I3 = RANDOM_INT(10, 14);
CONST I4 = RANDOM_INT(15, 20);
/// END HIDDEN
#define ASSERT(test) if (!(test)) cout << "Test failed in file " << __FILE__ \
                                       << " line " << __LINE__ << ": " #test << endl

void swap(int &X, int &Y) {
    int tmp = X;
    X = Y;
    Y = tmp;
    /// BEGIN HIDDEN
    cout << "J'ai appeler la procédure 'swap' sur les variable dont les valeurs sont " << X << " et " << Y << ".\n" ;
    /// END HIDDEN
}

int main() {
    int x = I1;
    int y = I2;
    int z = I3;
    int t = I4;
    
    /// BEGIN SOLUTION
    swap(x, y);
    swap(z, t);
    /// END SOLUTION
    
    ASSERT(x == I2);
    ASSERT(y == I1);
    ASSERT(z == I4);
    ASSERT(t == I3);
    return 0;
}
