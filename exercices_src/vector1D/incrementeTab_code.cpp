/// BEGIN HIDDEN
#include <iostream>
#include <vector>
#include "randomization.h"
using namespace std;

CONST TAB1 = RANDOM_VECTOR(RANDOM_INT(4, 7), RANDOM_INT, -2, 6);
CONST TAB2 = RANDOM_VECTOR(RANDOM_INT(4, 7), RANDOM_INT, -2, 6);
CONST TAB3 = RANDOM_VECTOR(RANDOM_INT(4, 7), RANDOM_INT, -2, 6);
CONST TAB4 = RANDOM_VECTOR(RANDOM_INT(4, 7), RANDOM_INT, -2, 6);
/// END HIDDEN

/** Ajoute 1 à tous les éléments d'un tableau et le renvoie
 * @param tab un tableau d'entiers
 * @return le tableau modifié
 **/
vector<int> incrementeTab(vector<int> tab) {
/// BEGIN SOLUTION
    for (int i=0; i<tab.size(); i++) {
        tab[i]++;
    }
    return tab;
/// END SOLUTION
}

/// BEGIN HIDDEN
void affiche(vector<int> tab) {
    int taille=tab.size();
    for (int i=0; i<taille; i++) {
        cout << tab[i]<<endl;
    }
}

int main(){
  affiche(incrementeTab(TAB1));
  affiche(incrementeTab(TAB2));
  affiche(incrementeTab(TAB3));
  affiche(incrementeTab(TAB4));
  affiche(incrementeTab({-3}));
  affiche(incrementeTab({-7,9}));
  return 0;
}
/// Objectif Pédagogique : parcours de tableau
/// END HIDDEN

