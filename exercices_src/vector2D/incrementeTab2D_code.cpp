/// BEGIN HIDDEN
#include <iostream>
#include <vector>
#include "randomization.h"
using namespace std;

vector<vector<int>> tabCarre         = { { 1,  2, 3 },
                                         { 4, 11, 6 },
                                         { 9, 12, 7 } };
vector<vector<int>> tabRectangulaire = { { 1,  2, 3 },
                                         { 9, 12, 7 } };
vector<vector<int>> tabBizarre       = { { 1,  2, 3 },
                                         { 4,  5 },
                                         { 6,  7, 8, 10 } };
vector<vector<int>> tabPresque1      = { { 1,  2 },
                                         { 4,  5, 9 },
                                         { 6,  7, 3 } };
vector<vector<int>> tabPresque2      = { { 1,  2, 3 },
                                         { 4,  5, 6 },
                                         { 6,  7 } };

/// END HIDDEN

/** Ajoute 1 à tous les éléments d'un tableau et le renvoie
 * @param tab un tableau 2D d'entiers pas forcément rectangulaire
 * (ses lignes peuvent ne pas avoir toutes le même nombre d'éléments)
 * @return le tableau modifié
 **/
vector<vector<int>> incrementeTab(vector<vector<int>> tab) {
/// BEGIN SOLUTION
    for (int i=0; i<tab.size(); i++) {
        for ( int j = 0; j < tab[i].size(); j++) {
            tab[i][j]++;
        }
    }
    return tab;
/// END SOLUTION
}

/// BEGIN HIDDEN

void affiche(vector<vector<int>> t) {
    for ( int i = 0; i < t.size(); i++ ) {
        for ( int j = 0; j < t[i].size(); j++) {
            cout << t[i][j] << " " ;
        }
        cout << endl;
    }
}

int main(){
  affiche(incrementeTab(tabCarre));
  affiche(incrementeTab(tabPresque1));
  affiche(incrementeTab(tabPresque2));
  affiche(incrementeTab(tabRectangulaire));
  affiche(incrementeTab(tabBizarre));
  return 0;
}
/// Objectif Pédagogique : parcours de tableau 2D.
/// END HIDDEN

