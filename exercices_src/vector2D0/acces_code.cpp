/// BEGIN HIDDEN
#include <iostream>
#include <vector>
#include "randomization.h"
using namespace std;

CONST I1 = RANDOM_INT(0, 6);
CONST I2 = RANDOM_INT(0, 5);

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
Ecrire la ligne de code permettant d'afficher la valeur contenue dans la case
située à la ligne I1 et à la colonne I2 de t, puis de retourner à la ligne.
Attention, il ne faut afficher aucun espace et aller une seule fois
à la ligne à la fin pour que votre solution soit considérée comme juste. */
/// BEGIN SOLUTION
    cout << t[I1][I2] << endl;
/// END SOLUTION
/// BEGIN HIDDEN
    return 0;
}
/// Objectif Pédagogique : Savoir accéder au contenu d'un tableau 2D
/// END HIDDEN

