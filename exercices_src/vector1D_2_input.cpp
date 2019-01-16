/// BEGIN HIDDEN
#include <iostream>
#include <vector>
#include "randomization.h"
using namespace std;

CONST TAB = RANDOM_VECTOR(RANDOM_INT(4, 7), RANDOM_INT, 0, 10);

int main() {
/// END HIDDEN
    vector<int> tab = TAB;
    int s = 0;
    cin >> tab[CI4];
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
