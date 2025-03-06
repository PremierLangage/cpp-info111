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

/** Renvoie la position (indice) du plus grand élément du tableau
 * (dernière occurrence s'il est présent plusieurs fois dans le tableau)
 * @param tab un tableau d'entiers
 * @return l'indice du plus grand élément du tableau.
 **/
 int maxTabDernierePosition(vector<int> t) {
/// BEGIN SOLUTION
    int m = t[0];
    int pos = 0;
    for ( int i = 1; i < t.size(); i++ ){
        if ( t[i] >= m ){
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
  ASSERT( maxTabDernierePosition({-3,-5,-1}) == 2 );
  ASSERT( maxTabDernierePosition({2,5,5}) == 2 );
/// BEGIN HIDDEN
  cout << maxTabDernierePosition(TAB1) << maxTabDernierePosition(TAB2) << maxTabDernierePosition(TAB3) << maxTabDernierePosition(TAB4);
  cout << maxTabDernierePosition({5,7,2}) << maxTabDernierePosition({5,4,3}) << maxTabDernierePosition({6,7,8}) << maxTabDernierePosition({5});
  return 0;
}
/// Objectif Pédagogique : parcours de tableau, enregistrement d'information à mettre à jour par un test pertinent, ne pas initialiser à une valeur arbitraire.
/// END HIDDEN

