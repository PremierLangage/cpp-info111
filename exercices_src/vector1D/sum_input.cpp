/// BEGIN HIDDEN
#include <iostream>
#include <vector>
#include "randomization.h"
using namespace std;

CONST N = RANDOM_INT(3, 5);
CONST TAB = RANDOM_VECTOR(N, RANDOM_INT, 0, 5);
CONST I1  = RANDOM_INT(0, N-1);

int main() {
/// END HIDDEN
    vector<int> tab = TAB;
    int s = 0;
    cin >> tab[I1];
    for (int i = 0; i < tab.size(); i++) {
        s = s + tab[i];
    }
    cout << s << endl;
/// BEGIN HIDDEN
    return 0;
}
/// Objectif Pédagigique : parcourir un tableau
/// END HIDDEN



