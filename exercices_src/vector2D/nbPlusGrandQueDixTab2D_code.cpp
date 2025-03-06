/// BEGIN HIDDEN
/// Objectif Pédagogique : parcours de tableau 2D, compteur

#include <iostream>
#include <vector>
#include "randomization.h"
using namespace std;

CONST N = RANDOM_INT(5, 25);
vector<vector<int>> tabTous  = { { N+1, N+2, N+3 },
                                 { N+4, N+1, N+6 },
                                 { N+9, N+2, N+7 } };
vector<vector<int>> tabAucun = { { N,   N-2, N-3 },
                                 { N-9, N-1, N-7 } };
vector<vector<int>> tabFin   = { {  1, 2, N+3 },
                                 {  N, N+5 },
                                 {  N-1, 3, 4, N+1 } };
vector<vector<int>> tabDebut = { { N+1, 2 },
                                 { N+4, 4, N },
                                 { N+6, 1, 3 } };
/// END HIDDEN

/** Compte le nombre d'éléments strictement supérieurs à N dans le tableau
 * @param tab un tableau 2D d'entiers pas forcément rectangulaire
 * (ses lignes peuvent ne pas avoir toutes le même nombre d'éléments)
 * @return nombre d'éléments strictement plus grands que N dans tab
 **/
int nbGrands(vector<vector<int>> tab) {
/// BEGIN SOLUTION
    int cpt = 0;
    for (int i=0; i<tab.size(); i++) {
        for (int j=0; j<tab[i].size(); j++) {
            if (tab[i][j] > N)
                cpt = cpt + 1;
        }
    }
    return cpt;
/// END SOLUTION
}

/// BEGIN HIDDEN
int main(){
  ASSERT(nbGrands(tabTous) == 9);
  ASSERT(nbGrands(tabAucun) == 0);
  ASSERT(nbGrands(tabFin) == 3);
  ASSERT(nbGrands(tabDebut) == 3);
  return 0;
}
/// END HIDDEN

