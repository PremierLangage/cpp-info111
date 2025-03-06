/// BEGIN HIDDEN
/// Objectif pédagogique: parcours
#include <iostream>
#include <vector>
#include "randomization.h"
using namespace std;

CONST V23 = RANDOM_VECTOR(2, RANDOM_VECTOR, 3, RANDOM_INT, 0, 5);

int main() {
/// END HIDDEN
    vector<vector <int>> tab = V23;
    int s;

    for (int i = 0; i < tab.size(); i++) {
        s = 0;
        for (int j = 0; j < tab[i].size(); j++) {
            s = s + tab[i][j];
        }
    }
    cout << s << endl;
/// BEGIN HIDDEN
}
/// END HIDDEN
