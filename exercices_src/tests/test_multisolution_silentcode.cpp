/// BEGIN HIDDEN
// Objective: test programs with two input zones
#include <iostream>
#include "randomization.h"
using namespace std;
#define ASSERT(test) if (!(test)) cout << "Test failed in file " << __FILE__ \
                                       << " line " << __LINE__ << ": " #test << endl
/// END HIDDEN

int main() {
    int x;
    /// BEGIN SOLUTION
    x = 1;
    /// END SOLUTION
    ASSERT(x == 1);
    /// BEGIN SOLUTION
    x = 2;
    /// END SOLUTION
    ASSERT(x == 2);
    return 0;
}
