/// BEGIN HIDDEN
#include <iostream>
#include <vector>
#include "randomization.h"
using namespace std;

CONST I1 = RANDOM_INT(0, 7);
CONST TAB = RANDOM_VECTOR(RANDOM_INT(4, 7), RANDOM_INT, 0, 6);

/// END HIDDEN

bool estCroissant(vector<int> t) {
  /** Fonction estCroissant
   * @param t un tableau d’entiers
   * @return un bool qui vaut true si t est trié dans l'ordre croissant
   * @exemple estCroissant({1,1,2,5}) == true
   **/
   *
   *
   *
   */
    bool res = true;
    for (int i = 0; i < t.size() - 1; i = i + 1) {
        if (t[i] < t[i + 1]) {
            res = false;
        } else {
            res = true;
        }
    }
    return res;
}


int main() {
    vector<int> tab = Vsort_rev;
    if (estTrie(tab)) {
        cout << "il est trie";
    } else {
        cout << "il n'est pas trie";
    }
    return 0;
}
