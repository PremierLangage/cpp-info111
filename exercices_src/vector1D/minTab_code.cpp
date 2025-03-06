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

/** Renvoie l'élément le plus petit du tableau
 * @param tab un tableau d'entiers
 * @return la valeur du plus petit élément du tableau
 **/
 int minTab(vector<int> t) {
/// BEGIN SOLUTION
    int m = t[0];
    for ( int i = 1; i < t.size(); i++ ){
        if ( t[i] < m )
            m = t[i];
    }
    return m;
/// END SOLUTION
}

/// BEGIN HIDDEN
int main(){
/// END HIDDEN
  /* En particulier votre fonction devra passer le test suivant
     (et plusieurs autres tests cachés) */
  ASSERT( minTab({200,500,300}) == 200 );
/// BEGIN HIDDEN
  cout << minTab(TAB1) << minTab(TAB2) << minTab(TAB3) << minTab(TAB4);
  cout << minTab({5,2,7}) << minTab({5,4,3}) << minTab({6,7,8}) << minTab({5});
  return 0;
}
/// Objectif Pédagogique : parcours de tableau, enregistrement d'information à mettre à jour par un test pertinent, ne pas initialiser à une valeur arbitraire.
/// END HIDDEN

