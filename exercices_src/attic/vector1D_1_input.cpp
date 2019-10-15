/// BEGIN HIDDEN
#include <iostream>
#include <vector>
#include "randomization.h"
using namespace std;

CONST I1  = RANDOM_INT(0, 4)
  
int main() {
/// END HIDDEN
    vector<int> tab = {4, 5, 42, 85, 45};
    int i;

    cin >> i;
    cout << tab[i - I1] << endl;
/// BEGIN HIDDEN
    return 0;
}
/// END HIDDEN
