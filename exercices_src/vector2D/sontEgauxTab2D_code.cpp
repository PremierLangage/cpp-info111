/// BEGIN HIDDEN
#include <iostream>
#include <vector>
#include "randomization.h"
using namespace std;

vector<vector<int>> tabBase    = { { 1,  2, 3 },
                                   { 4, 11, 6 },
                                   { 9, 12, 7 } };
vector<vector<int>> tabColonne = { { 1,  2, 3, 3 },
                                   { 4, 11, 6 },
                                   { 9, 12, 7 } };
vector<vector<int>> tabLigne   = { { 1,  2, 3 },
                                   { 4, 11, 6 },
                                   { 9, 12, 7 },
                                   { 9, 12, 7 } };
vector<vector<int>> tabElement1= { { 2,  2, 3 },
                                   { 4, 11, 6 },
                                   { 9, 12, 7 } };
vector<vector<int>> tabElement2= { { 1,  2, 3 },
                                   { 4, 11, 6 },
                                   { 9, 12, 11 } };
/// END HIDDEN

/** Teste si deux tableaux à 2 dimensions sont égaux,
 *  c'est-à-dire toutes tailles égales et éléments de mêmes indices égaux.
 * @param tab1 le premier tableau d'entiers
 * @param tab2 le deuxième tableau d'entiers
 * @return true si les deux tableaux sont égaux, false sinon
 **/
bool sontEgauxTab(vector<vector<int>> tab1, vector<vector<int>> tab2) {
/// BEGIN SOLUTION
    if (tab1.size() != tab2.size()) {
        return false;
    }
    for (int i=0; i < tab1.size(); i++) {
        if ( tab1[i].size() != tab2[i].size() ) {
            return false;
        }
    }
    for (int i=0; i<tab1.size(); i++) {
        for (int j=0; j<tab1[i].size(); j++) {
            if ( tab1[i][j] != tab2[i][j] ) {
                return false;
            }
        }
    }
    return true;
/// END SOLUTION
}

/// BEGIN HIDDEN
int main(){
  cout << sontEgauxTab(tabBase,tabBase) << sontEgauxTab(tabBase,tabLigne) << sontEgauxTab(tabBase,tabColonne);
  cout << sontEgauxTab(tabBase,tabElement1) << sontEgauxTab(tabBase,tabElement2);
  return 0;
}
/// Objectif Pédagogique : parcours de tableau, return pas trop tôt (erreur classique du if/else dans la boucle)
/// END HIDDEN

