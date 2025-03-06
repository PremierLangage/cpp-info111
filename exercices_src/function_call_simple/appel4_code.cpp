/// BEGIN HIDDEN
#include <iostream>
#include "randomization.h"
using namespace std;

CONST S = RANDOM_CHOICE("alice", "bob", "charlie", "dany");

int bidule(string a) {
    return size(a)+1;
}
/// END HIDDEN

/* On suppose que vous disposez de la fonction dont l'en-tête est donné
   ci-dessous (vous ne devez donc pas écrire de code pour cette fonction) */
int bidule(string a);

/// BEGIN HIDDEN
int main(){
/// END HIDDEN
/* Ecrire une ou deux ligne(s) de code permettant de déclarer une
   variable r du bon type et de stocker dans cette variable le résultat
   de l'appel de la fonction ci-dessus sur la valeur S */
/// BEGIN SOLUTION
  int r = bidule(S);
/// END SOLUTION
/// BEGIN HIDDEN
  cout << r << endl;
  return 0;
}
/// Objectif Pédagogique : appel de fonction.
/// END HIDDEN

