/// BEGIN HIDDEN
/// Objectif Pédagogique : appel de procédure.

#include <iostream>
#include "randomization.h"
using namespace std;

CONST S = RANDOM_CHOICE("alice", "bob", "charlie", "dany");
CONST N = RANDOM_INT(2, 9);

void bidule(string a, int b) {
    cout << b*size(a) << endl;
}
/// END HIDDEN

/* On suppose que vous disposez de la fonction dont l'en-tête est donné
 * ci-dessous (vous ne devez donc pas écrire de code pour cette fonction)
 */
void bidule(string a, int b);

int main(){
    /* Écrire une ligne de code permettant d'appeler cette fonction
       sur les valeurs S et N */
    /// BEGIN SOLUTION
    bidule(S,N);
    /// END SOLUTION
    return 0;
}
