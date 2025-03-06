/// BEGIN HIDDEN
#include <iostream>
#include "randomization.h"
using namespace std;

CONST I1 = RANDOM_INT(2, 6);
CONST I2 = RANDOM_INT(70, 80);

int main(){
/// END HIDDEN
    /* Ecrire ici le code permettant d'afficher tous les multiples
       de I1 compris entre 0 et I2 exclu.
       On commencera par afficher 0, puis I1, puis son double, etc.
       Attention, il ne faut afficher aucun espace et aller à la ligne entre
       chaque entier pour que votre solution soit considérée comme juste.*/
/// BEGIN SOLUTION
    for (int i = 0; i < I2; i = i+I1)
        cout << i << endl;
/// END SOLUTION
/// BEGIN HIDDEN
}
/// Objectif Pédagogique : Savoir faire une boucle for avec un pas autre que 1. L'intervalle est volontairement grand pour qu'ils ne soient pas tentés de la faire sans boucle.
/// END HIDDEN

