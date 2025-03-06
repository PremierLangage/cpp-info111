/// BEGIN HIDDEN
#include <iostream>
#include <vector>
#include "randomization.h"
using namespace std;

CONST V22 = RANDOM_VECTOR(2, RANDOM_VECTOR, 2, RANDOM_INT, 0, 5);

int main() {
/// END HIDDEN
    vector<vector <int>> tab = V22;
    int d = tab[0][0] * tab[1][1] - tab[1][0] * tab[0][1];
    cout << d << endl;
/// BEGIN HIDDEN
}
/// END HIDDEN

