/// BEGIN HIDDEN
#include <iostream>
#include <vector>
#include "randomization.h"
using namespace std;

CONST I1 = RANDOM_INT(0, 6);
CONST I2 = RANDOM_INT(10, 20);

void affiche(vector<int> tab) {
    int taille=tab.size();
    for (int i=0; i<taille; i++) {
        cout << tab[i]<<endl;
    }
}

int main(){
    vector<int> t = {-5, -1, -4, -2, -7, -3, -6};
/// END HIDDEN
   /* On suppose que vous avez déjà à disposition un tableau t de 7 cases
      remplies avec des valeurs que vous ne connaissez pas.
      Ecrire ici la ligne de code pour modifier la valeur contenue dans
      la case d'indice I1 de t en la remplaçant par la valeur I2 */
/// BEGIN SOLUTION
    t[I1] = I2;
/// END SOLUTION
/// BEGIN HIDDEN
    affiche(t);
    return 0;
}
/// Objectif Pédagogique : Savoir modifier un tableau
/// END HIDDEN

