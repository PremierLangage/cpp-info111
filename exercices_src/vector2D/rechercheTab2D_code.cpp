/// BEGIN HIDDEN
/// Objectif Pédagogique : parcours de tableau, return pas trop tôt (erreur classique du if/else dans la boucle)

#include <iostream>
#include <vector>
#include "randomization.h"
using namespace std;
/// END HIDDEN

/** Teste si un tableau 2D contient un élément donné
 * @param tab un tableau 2D d'entiers pas forcément rectangulaire
 * (ses lignes peuvent ne pas avoir toutes le même nombre d'éléments)
 * @param v un entier
 * @return true si tab contient v, false sinon
 **/
bool contient(vector<vector<int>> tab, int v) {
/// BEGIN SOLUTION
    for (int i=0; i<tab.size(); i++) {
        for (int j=0; j<tab[i].size(); j++) {
            if (tab[i][j] == v) return true;
        }
    }
    return false;
/// END SOLUTION
}

/// BEGIN HIDDEN
int main(){
  vector<vector<int>> tabCarre         = { { 1,  2, 3 },
                                         { 4, 11, 6 },
                                         { 9, 12, 7 } };
  vector<vector<int>> tabRectangulaire = { { 1,  2, 3 },
                                         { 9, 12, 7 } };
  vector<vector<int>> tabBizarre       = { { 1,  2, 3 },
                                         { 4,  5 },
                                         { 6,  7, 8, 10 } };
  ASSERT(contient(tabCarre,1));
  ASSERT(contient(tabRectangulaire,7));
  ASSERT(contient(tabBizarre,10));
  ASSERT(not contient(tabCarre,0));
  ASSERT(not contient(tabBizarre,9));
  return 0;
}
/// END HIDDEN

