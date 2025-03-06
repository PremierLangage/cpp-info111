/// BEGIN HIDDEN
#include <iostream>
#include <vector>
#include "randomization.h"
using namespace std;

CONST TAB1 = RANDOM_VECTOR(RANDOM_INT(4, 7), RANDOM_INT, 0, 6);
CONST TAB2 = RANDOM_VECTOR(RANDOM_INT(4, 7), RANDOM_INT, 0, 6);
CONST TAB3 = RANDOM_VECTOR(RANDOM_INT(4, 7), RANDOM_INT, 0, 6);
CONST TAB4 = RANDOM_VECTOR(RANDOM_INT(4, 7), RANDOM_INT, 0, 6);
/// END HIDDEN

/** Teste si deux tableaux sont égaux (c'est-à-dire tailles égales et
 * éléments de même indice égaux)
 * @param tab1 le premier tableau d'entiers
 * @param tab2 le deuxième tableau d'entiers
 * @return true si les deux tableaux sont égaux, false sinon
 **/
bool sontEgauxTab(vector<int> tab1, vector<int> tab2) {
/// BEGIN SOLUTION
    if (tab1.size() != tab2.size()) {
        return false;
    }
    for (int i=0; i < tab1.size(); i++) {
        if ( tab1[i] != tab2[i] ) {
            return false;
        }
    }
    return true;
/// END SOLUTION
}

/// BEGIN HIDDEN
int main(){
  cout << sontEgauxTab(TAB1,TAB1) << sontEgauxTab(TAB1,TAB2) << sontEgauxTab(TAB1,TAB3) << sontEgauxTab(TAB1,TAB4);
  cout << sontEgauxTab({1,2,3},{1,2}) << sontEgauxTab({1,2,3},{1,7,3}) << sontEgauxTab({1,2,3},{1,2,3});
  return 0;
}
/// Objectif Pédagogique : parcours de tableau, return pas trop tôt (erreur classique du if/else dans la boucle)
/// END HIDDEN

