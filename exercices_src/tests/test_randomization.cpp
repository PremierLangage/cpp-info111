#include <iostream>
#include <vector>
#include "randomization.h"
using namespace std;

CONST I = RANDOM_INT(1, 3);
CONST TAB = RANDOM_VECTOR(RANDOM_INT(4, 7), RANDOM_INT, 0, 10);
//CONST TAB2D = RANDOM_VECTOR(4, RANDOM_VECTOR, 5, RANDOM_INT, 0, 10);

int main() {
    auto i = I;
    auto tab = TAB;
    //  auto tab2D = TAB2D;
    cout << i << endl;
    for (auto value: tab)
        cout << value << " ";
    cout << endl;
    return 0;
}
