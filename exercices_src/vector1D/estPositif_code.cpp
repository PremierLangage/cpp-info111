/// BEGIN HIDDEN
#include <iostream>
#include <vector>
#include "randomization.h"
using namespace std;

CONST TAB1 = RANDOM_VECTOR(RANDOM_INT(4, 7), RANDOM_INT, -2, 6);
CONST TAB2 = RANDOM_VECTOR(RANDOM_INT(4, 7), RANDOM_INT, -2, 6);
CONST TAB3 = RANDOM_VECTOR(RANDOM_INT(4, 7), RANDOM_INT, -2, 6);
CONST TAB4 = RANDOM_VECTOR(RANDOM_INT(4, 7), RANDOM_INT, -2, 6);
/// END HIDDEN

/** Teste si tous les éléments d'un tableau sont positifs
 * (au sens large: 0 est considéré comme positif)
 * @param tab un tableau d'entiers
 * @return true si tous les éléments de tab sont positifs, false sinon
 **/
bool estPositif(vector<int> tab) {
/// BEGIN SOLUTION
    int taille = tab.size();
    for (int i=0; i<taille; i++) {
        if (tab[i]<0) return false;
    }
    return true;
/// END SOLUTION
}

/// BEGIN HIDDEN
int main(){
  cout << estPositif(TAB1) << estPositif(TAB2) << estPositif(TAB3) << estPositif(TAB4);
  cout << estPositif({1,1,2,3}) << estPositif({0}) << estPositif({-1}) << estPositif({-1,2});
  return 0;
}
/// Objectif Pédagogique : parcours de tableau, return pas trop tôt (erreur classique du if/else dans la boucle)
/// END HIDDEN

