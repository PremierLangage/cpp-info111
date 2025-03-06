/// BEGIN HIDDEN
#include <iostream>
#include <vector>
#include "randomization.h"
using namespace std;

CONST I1 = RANDOM_INT(0, 6);

int main(){
    vector<int> t = {-5, -1, -4, -2, -7, -3, -6};
/// END HIDDEN
/* On suppose que vous avez déjà à disposition un tableau t de 7 cases
   remplies avec des valeurs que vous ne connaissez pas.
   Ecrire ici la ligne de code permettant d'afficher la valeur contenue
   dans la case d'indice I1 de t, puis de retourner à la ligne.
   Attention, il ne faut afficher aucun espace et aller une seule fois
   à la ligne à la fin pour que votre solution soit considérée juste. */
/// BEGIN SOLUTION
    cout << t[I1] << endl;
/// END SOLUTION
/// BEGIN HIDDEN
    return 0;
}
/// Objectif Pédagogique : Savoir accéder au contenu d'un tableau
/// END HIDDEN

