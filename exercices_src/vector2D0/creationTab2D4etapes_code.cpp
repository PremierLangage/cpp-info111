/// BEGIN HIDDEN
/// Objectif Pédagogique : Construction d'un tableau 2D avec les 4 étapes

#include <iostream>
#include <vector>
#include "randomization.h"
using namespace std;

CONST L = RANDOM_INT(2, 9);
CONST C = RANDOM_INT(2, 8);
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
/// END HIDDEN
    /* Construire un tableau à 2 dimensions d'entiers nommé t de L lignes
       et de C colonnes dont tous les éléments valent V. */
/// BEGIN SOLUTION
    vector<vector<int>> t;
    t = vector<vector<int>>(L);
    for ( int i=0; i < L; i++ ) {
        t[i] = vector<int>(C);
    }
    for ( int i=0; i<L; i++ ) {
        for ( int j=0; j<C; j++ ) {
            t[i][j] = V;
        }
    }
/// END SOLUTION
/// BEGIN HIDDEN
    affiche(t);
    return 0;
}
/// END HIDDEN

