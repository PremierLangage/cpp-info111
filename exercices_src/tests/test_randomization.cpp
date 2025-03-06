#include <iostream>
#include <vector>
#include "randomization.h"
using namespace std;

CONST I = RANDOM_INT(1, 3);
CONST J = RANDOM_CHOICE(1, 4, 7);
CONST S = RANDOM_CHOICE("a", "bb", "ccc");
CONST TAB = RANDOM_VECTOR(RANDOM_INT(4, 7), RANDOM_INT, 0, 10);
CONST TAB2D = RANDOM_VECTOR(4, RANDOM_VECTOR, 5, RANDOM_INT, 0, 10);

int main() {
    int i = I;
    int j = J;
    string s = S;
    vector<int> tab = TAB;
    vector<vector<int>> tab2D = TAB2D;
    cout << i << endl;
    cout << j << endl;
    cout << s << endl;
    cout << tab << endl;
    cout << tab2D << endl;
    return 0;
}
