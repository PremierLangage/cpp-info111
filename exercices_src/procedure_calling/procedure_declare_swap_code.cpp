#include <iostream>

using namespace std;

/// BEGIN HIDDEN
#include "randomization.h"
CONST I1 = RANDOM_INT(2, 5);
CONST I2 = RANDOM_INT(6, 10);
/// END HIDDEN
#define ASSERT(test) if (!(test)) cout << "Test failed in file " << __FILE__ \
                                       << " line " << __LINE__ << ": " #test << endl

/// BEGIN SOLUTION
void swap(int &X, int &Y)
/// END SOLUTION
{
    int tmp = X;
    X = Y;
    Y = tmp;
}

int main() {
    int X = I1;
    int Y = I2;
    swap(X, Y);
    ASSERT(X == I2);
    ASSERT(Y == I1);
    return 0;
}
