/// BEGIN HIDDEN
#include <iostream>
#include <vector>
#include "randomization.h"
using namespace std;

CONST I1 = RANDOM_INT(0, 6);
CONST I2 = RANDOM_INT(0, 5);
CONST V = RANDOM_INT(10, 20);

void affiche(vector<vector<int>> t) {
    for ( int i = 0; i < t.size(); i++ ) {
        for ( int j = 0; j < t[i].size(); j++) {
            cout << t[i][j] << " " ;
        }
        cout << endl;
    }
}

int main(){
    vector<vector<int>> t;
    t = vector<vector<int>>(7);
    for ( int i=0; i < 7; i++ ) {
        t[i] = vector<int>(6);
    }
    for ( int i=0; i<7; i++ ) {
        for ( int j=0; j<6; j++ ) {
            t[i][j] = i*j-2;
        }
    }
/// END HIDDEN
/* On suppose que vous avez déjà à disposition un tableau t à 2 dimensions de
7 lignes et 6 colonnnes, rempli avec des valeurs que vous ne connaissez pas.
Ecrire la ligne de code pour modifier la valeur contenue dans la case située
à la ligne I1 et à la colonne I2 de t en la remplaçant par la valeur V */
/// BEGIN SOLUTION
    t[I1][I2] = V;
/// END SOLUTION
/// BEGIN HIDDEN
    affiche(t);
    return 0;
}
/// Objectif Pédagogique : Savoir modifier un tableau 2D
/// END HIDDEN

