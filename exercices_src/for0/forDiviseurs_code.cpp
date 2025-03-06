/// BEGIN HIDDEN
#include <iostream>
#include "randomization.h"
using namespace std;

CONST I1 = RANDOM_INT(81, 99);

int main(){
/// END HIDDEN
  /* Ecrire ici le code permettant d'afficher tous les diviseurs
     de I1 (y compris 1 et I1).
     On rappelle que a divise b si le reste de la division de b par a
     est nul. Le reste s'obtient avec % en C++.
     Attention, il ne faut afficher aucun espace et aller à la ligne entre
     chaque entier pour que votre solution soit considérée comme juste. */
/// BEGIN SOLUTION
    for (int i = 1; i <= I1; i++)
        if( I1 % i == 0 )
            cout << i << endl;
/// END SOLUTION
/// BEGIN HIDDEN
}
/// Objectif Pédagogique : Savoir faire une boucle for. L'intervalle est volontairement grand pour qu'ils ne soient pas tentés de la faire sans boucle.
/// END HIDDEN

