/// BEGIN HIDDEN
#include <iostream>
#include <vector>
#include "randomization.h"
using namespace std;

CONST TAB1 = RANDOM_VECTOR(RANDOM_INT(4, 7), RANDOM_INT, 1, 9);
CONST TAB2 = RANDOM_VECTOR(RANDOM_INT(4, 7), RANDOM_INT, -9, -1);
CONST TAB3 = RANDOM_VECTOR(RANDOM_INT(4, 7), RANDOM_INT, 0, 6);
CONST TAB4 = RANDOM_VECTOR(RANDOM_INT(4, 7), RANDOM_INT, 0, 6);
/// END HIDDEN

/** Renvoie la position (indice) du plus petit élément du tableau
 * (dernière occurrence s'il est présent plusieurs fois dans le tableau)
 * @param tab un tableau d'entiers
 * @return l'indice du plus petit élément du tableau.
 **/
 int minTabDernierePosition(vector<int> t) {
/// BEGIN SOLUTION
    int m = t[0];
    int pos = 0;
    for ( int i = 1; i < t.size(); i++ ){
        if ( t[i] <= m ){
            m = t[i];
            pos = i;
        }
    }
    return pos;
/// END SOLUTION
}

/// BEGIN HIDDEN
int main(){
/// END HIDDEN
  /* En particulier votre fonction devra passer les tests suivants
     (et plusieurs autres tests cachés) */
  ASSERT( minTabDernierePosition({200,500,300}) == 0 );
  ASSERT( minTabDernierePosition({5,3,3,7}) == 2 );
/// BEGIN HIDDEN
  cout << minTabDernierePosition(TAB1) << minTabDernierePosition(TAB2) << minTabDernierePosition(TAB3) << minTabDernierePosition(TAB4);
  cout << minTabDernierePosition({5,2,7}) << minTabDernierePosition({5,4,3}) << minTabDernierePosition({6,7,8}) << minTabDernierePosition({5});
  return 0;
}
/// Objectif Pédagogique : parcours de tableau, enregistrement d'information à mettre à jour par un test pertinent, ne pas initialiser à une valeur arbitraire.
/// END HIDDEN

