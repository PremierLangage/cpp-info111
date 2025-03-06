/// BEGIN HIDDEN
#include <iostream>
#include "randomization.h"
using namespace std;

CONST N = RANDOM_INT(2, 9);

void bidule(int a) {
    cout << 3*a << endl;
    cout << a-2 << endl;
}
/// END HIDDEN

/* On suppose que vous disposez de la fonction dont l'en-tête est donné
   ci-dessous (vous ne devez donc pas écrire de code pour cette fonction) */
void bidule(int a);

int main(){
/* Ecrire une ligne de code permettant d'appeler cette fonction
   sur la valeur N */
/// BEGIN SOLUTION
  bidule(N);
/// END SOLUTION
  return 0;
}
/// BEGIN HIDDEN
/// Objectif Pédagogique : appel de procédure.
/// END HIDDEN

