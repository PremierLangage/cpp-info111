/// BEGIN HIDDEN
#include <iostream>
#include <vector>
#include "randomization.h"
using namespace std;

CONST I1  = RANDOM_INT(1, 3);
CONST TAB = RANDOM_VECTOR(RANDOM_INT(6, 10), RANDOM_INT, 1, 3);
  
/// END HIDDEN
int recherche(int x, vector<int> t) {
    for (int i = 0; i < t.size(); i = i + 1) {
        if (t[i] == x) {
            return i;
        }
        return -1;
    }
}


int main() {
    vector<int> tab = TAB;
    cout << recherche(I1, tab) << endl;
    return 0;
}

