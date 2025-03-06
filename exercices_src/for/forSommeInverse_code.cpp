/// BEGIN HIDDEN
#include <iostream>
#include "randomization.h"
using namespace std;

CONST I1 = RANDOM_INT(1, 7);
CONST I2 = RANDOM_INT(18, 26);

int main(){
/// END HIDDEN
  /* Ecrire ici le code permettant de mettre dans la variable s
     la somme des inverses des entiers compris entre I1 et I2 inclus.
     Attention, l'inverse d'un entier n s'obtient avec 1.0/n (1/n vaut 0). */
/// BEGIN SOLUTION
    float s = 0;
    for (int i = I1; i <= I2; i++)
        s = s + 1.0 / i;
/// END SOLUTION
/// BEGIN INITSOLUTION
///    float s;
/// END INITSOLUTION
/// BEGIN HIDDEN
    cout << s << endl;
}
/// Objectif Pédagogique : Boucle for avec accumulateur. Veut-on randomiser le nom de la variable s ?
/// END HIDDEN

