/// BEGIN HIDDEN
#include <iostream>
#include "randomization.h"
using namespace std;

CONST N = RANDOM_INT(2, 9);

float bidule(float a, int b) {
    return a - b;
}
/// END HIDDEN

/* On suppose que vous disposez de la fonction dont l'en-tête est donné
   ci-dessous (vous ne devez donc pas écrire de code pour cette fonction) */
float bidule(float a, int b);

/// BEGIN HIDDEN
int main(){
/// END HIDDEN
/* Ecrire une ou deux ligne(s) de code permettant de déclarer une
   variable r du bon type et de stocker dans cette variable le résultat
   de l'appel de la fonction ci-dessus sur les valeurs 3.5 et N */
/// BEGIN SOLUTION
  float r = bidule(3.5,N);
/// END SOLUTION
/// BEGIN HIDDEN
  cout << r << endl;
  return 0;
}
/// Objectif Pédagogique : appel de fonction.
/// END HIDDEN

