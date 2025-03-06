/// BEGIN HIDDEN
#include <iostream>
#include <vector>
#include "randomization.h"
using namespace std;

vector<vector<int>> tabNon      = { { 1,  2, 3 },
                                    {-4, -1, -6},
                                    {-9, 12, 7 } };
vector<vector<int>> tabPresque1 = { {-1,  2, 3 },
                                    { 4, 11, 6 },
                                    { 9, 12, 7 } };
vector<vector<int>> tabPresque2 = { { 1,  2, 3 },
                                    { 4,  5 },
                                    { 6,  7, 8, -10 } };
vector<vector<int>> tabOui      = { { 1,  2, 3 },
                                    { 6,  7 } };
/// END HIDDEN

/** Teste si tous les éléments d'un tableau 2D sont positifs
 * (au sens large: 0 est considéré comme positif)
 * @param tab un tableau 2D d'entiers pas forcément rectangulaire
 * (ses lignes peuvent ne pas avoir toutes le même nombre d'éléments)
 * @return true si tous les éléments de tab sont positifs, false sinon
 **/
bool estPositif(vector<vector<int>> tab) {
/// BEGIN SOLUTION
    for (int i=0; i<tab.size(); i++) {
        for (int j=0; j<tab[i].size(); j++) {
            if (tab[i][j]<0) return false;
        }
    }
    return true;
/// END SOLUTION
}

/// BEGIN HIDDEN
int main(){
  cout << estPositif(tabNon) << estPositif(tabPresque1) << estPositif(tabPresque2) << estPositif(tabOui);
  return 0;
}
/// Objectif Pédagogique : parcours de tableau, return pas trop tôt (erreur classique du if/else dans la boucle)
/// END HIDDEN

