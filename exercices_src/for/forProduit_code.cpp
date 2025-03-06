/// BEGIN HIDDEN
/// Objectif Pédagogique : Boucle for avec accumulateur. Veut-on randomiser le nom de la variable p ?

#include <iostream>
#include "randomization.h"
using namespace std;

CONST I1 = RANDOM_INT(1, 6);
CONST I2 = I1 + RANDOM_INT(10,12);

int main(){
/// END HIDDEN
    /* Écrire ici le code permettant de mettre dans la variable p
       le produit des entiers compris entre I1 et I2 inclus. */
/// BEGIN SOLUTION
    long int p = 1;
    for (int i = I1; i <= I2; i++)
        p = p * i;
/// END SOLUTION
/// BEGIN INITSOLUTION
///    long int p;
/// END INITSOLUTION
/// BEGIN HIDDEN
    cout << p << endl;
}
/// END HIDDEN

