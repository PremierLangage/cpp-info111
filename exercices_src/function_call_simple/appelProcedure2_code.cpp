/// BEGIN HIDDEN
#include <iostream>
#include "randomization.h"
using namespace std;

CONST S = RANDOM_CHOICE("alice", "bob", "charlie", "dany");

void bidule(string a) {
    cout << a+"kl" << endl;
}
/// END HIDDEN

/* On suppose que vous disposez de la fonction dont l'en-tête est donné
   ci-dessous (vous ne devez donc pas écrire de code pour cette fonction) */
void bidule(string a);

int main(){
/* Ecrire une ligne de code permettant d'appeler cette fonction
   sur la valeur S */
/// BEGIN SOLUTION
  bidule(S);
/// END SOLUTION
  return 0;
}
/// BEGIN HIDDEN
/// Objectif Pédagogique : appel de procédure.
/// END HIDDEN

