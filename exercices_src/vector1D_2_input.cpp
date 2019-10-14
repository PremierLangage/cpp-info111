/// BEGIN HIDDEN
#include <iostream>
#include <vector>
#include "randomization.h"
using namespace std;

CONST TAB = RANDOM_VECTOR(RANDOM_INT(4, 7), RANDOM_INT, 0, 6);
CONST I1  = RANDOM_INT(0, 4)
  
int main() {
/// END HIDDEN
    vector<int> tab = TAB;
    int s = 0;
    cin >> tab[I1];
    for (int i = 0; i < tab.size(); i++) {
        if (tab[i] % 2 == 0) {
            s = s + tab[i];
        }
    }
    cout << s << endl;
/// BEGIN HIDDEN
    return 0;
}
/// END HIDDEN

