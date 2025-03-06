/// BEGIN HIDDEN
#include <iostream>
#include <vector>
#include "randomization.h"
using namespace std;

CONST V23 = RANDOM_VECTOR(2, RANDOM_VECTOR, 3, RANDOM_INT, 0, 5);
CONST I = RANDOM_INT(0, 1)
CONST J = RANDOM_INT(0, 2)

int main() {
/// END HIDDEN
    vector<vector <int>> tab = V23;

    cout << tab[I][J] << endl;
/// BEGIN HIDDEN
}
/// END HIDDEN


