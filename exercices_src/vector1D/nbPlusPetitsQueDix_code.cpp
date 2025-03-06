/// BEGIN HIDDEN
/// Objectif Pédagogique : parcours de tableau, compteur

#include <iostream>
#include <vector>
#include "randomization.h"
using namespace std;

CONST N = RANDOM_INT(5, 25);
CONST TAB1 = RANDOM_VECTOR(RANDOM_INT(4, 7), RANDOM_INT, N-5, N+5);
CONST TAB2 = RANDOM_VECTOR(RANDOM_INT(4, 7), RANDOM_INT, N-5, N+5);
CONST TAB3 = RANDOM_VECTOR(RANDOM_INT(4, 7), RANDOM_INT, N-5, N+5);
CONST TAB4 = RANDOM_VECTOR(RANDOM_INT(4, 7), RANDOM_INT, N-5, N+5);
/// END HIDDEN

/** Compte le nombre d'éléments strictement inférieurs à N dans le tableau
 * @param tab un tableau d'entiers
 * @return nombre d'éléments strictement plus petits que N dans tab
 **/
int nbPetits(vector<int> tab) {
/// BEGIN SOLUTION
    int cpt = 0;
    for (int i=0; i<tab.size(); i++) {
        if (tab[i] < N)
            cpt = cpt + 1;
    }
    return cpt;
/// END SOLUTION
}

/// BEGIN HIDDEN
int main(){
  cout << nbPetits(TAB1) << nbPetits(TAB2) << nbPetits(TAB3) << nbPetits(TAB4);
  ASSERT(nbPetits({N,N-1,27,3,35,N})==2);
  ASSERT(nbPetits({0})==1);
  ASSERT(nbPetits({N-1})==1);
  ASSERT(nbPetits({N,30})==0);
  return 0;
}
/// END HIDDEN

