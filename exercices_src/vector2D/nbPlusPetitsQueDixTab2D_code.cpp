/// BEGIN HIDDEN
/// Objectif Pédagogique : parcours de tableau 2D, compteur

#include <iostream>
#include <vector>
#include "randomization.h"
using namespace std;

CONST N = RANDOM_INT(5, 25);
vector<vector<int>> tabTous  = { { N-1, N-2, N-3 },
                                 { N-4, N-1, N-6 },
                                 { N-5, N-2, N-7 } };
vector<vector<int>> tabAucun = { { N,   N+2, N+3 },
                                 { N+5, N+1, N+7 } };
vector<vector<int>> tabFin   = { { 31, 32, N-3 },
                                 {  N, N-5 },
                                 {  N+1, 33, 34, N-1 } };
vector<vector<int>> tabDebut = { { N-1, 32 },
                                 { N-4, 34, N },
                                 { N-6, 31, 33 } };
/// END HIDDEN

/** Compte le nombre d'éléments strictement inférieurs à N dans le tableau
 * @param tab un tableau 2D d'entiers pas forcément rectangulaire
 * (ses lignes peuvent ne pas avoir toutes le même nombre d'éléments)
 * @return nombre d'éléments strictement plus petits que N dans tab
 **/
int nbPetits(vector<vector<int>> tab) {
/// BEGIN SOLUTION
    int cpt = 0;
    for (int i=0; i<tab.size(); i++) {
        for (int j=0; j<tab[i].size(); j++) {
            if (tab[i][j] < N)
                cpt = cpt + 1;
        }
    }
    return cpt;
/// END SOLUTION
}

/// BEGIN HIDDEN
int main(){
  ASSERT(nbPetits(tabTous) == 9);
  ASSERT(nbPetits(tabAucun) == 0);
  ASSERT(nbPetits(tabFin) == 3);
  ASSERT(nbPetits(tabDebut) == 3);
  return 0;
}
/// END HIDDEN

