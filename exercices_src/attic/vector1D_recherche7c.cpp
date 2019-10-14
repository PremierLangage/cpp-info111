/// BEGIN HIDDEN
#include <iostream>
#include <vector>
#include "randomization.h"
using namespace std;

CONST TAB = RANDOM_VECTOR(RANDOM_INT(4, 7), RANDOM_INT, 0, 6);
CONST I1  = RANDOM_INT(0, 4)
  
/// END HIDDEN
int recherche(int x, vector<int> t) {
    int indice = -1;
    for (int i = t.size() - 1; i >= 0; i = i - 1) {
        if (t[i] == x) {
            indice = i;
        }
    }
    return indice;
}


int main() {
    vector<int> tab = Vlt10;
    cout << recherche(3, tab) << endl;
    return 0;
}
