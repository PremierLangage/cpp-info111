/// BEGIN HIDDEN
#include <iostream>
#include <vector>
#include "randomization.h"
using namespace std;

CONST TAB = RANDOM_VECTOR(RANDOM_INT(4, 7), RANDOM_INT, 0, 6);
CONST I1  = RANDOM_INT(0, 4);
  
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
