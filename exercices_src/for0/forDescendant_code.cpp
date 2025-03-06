/// BEGIN HIDDEN
/// Objectif Pédagogique : Savoir faire une boucle for décroissante. L'intervalle est volontairement grand pour qu'ils ne soient pas tentés de la faire sans boucle.
#include <iostream>
#include "randomization.h"
using namespace std;

CONST I1 = RANDOM_INT(18, 26);
CONST I2 = RANDOM_INT(0, 7);

int main(){
    /// END HIDDEN
    /* Écrire un fragment de programme permettant d'afficher tous les
       entiers compris entre I1 et I2 inclus, l'affichage se faisant
       en ordre décroissant (le premier nombre affiché est I1, le
       dernier I2).

       Attention: n'afficher aucun espace et aller à la ligne entre
       chaque entier pour que votre solution soit considérée comme
       juste.
    */
    /// BEGIN SOLUTION
    for (int i = I1; i >= I2; i--)
        cout << i << endl;
    /// END SOLUTION
    /// BEGIN HIDDEN
}
/// END HIDDEN

