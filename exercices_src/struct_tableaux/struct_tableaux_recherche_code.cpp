/// BEGIN HIDDEN
#include <iostream>

using namespace std;

#define NB_MAX 10
#include "randomization.h"
CONST I1 = RANDOM_INT(1,20);
CONST I2 = RANDOM_INT(1,20);
CONST I3 = RANDOM_INT(1,20);
CONST I4 = RANDOM_INT(1,20);
CONST I5 = RANDOM_INT(1,20);
/// END HIDDEN

struct tabNotes {
    int tab[NB_MAX];
    int nbElts;
};

// Completer la fonction dont voici la documentation :
/** Recherche l'indice du (premier) minimum d'une serie de notes
 *  @param[in] t: tableau (structure) de notes
 *  @return: l'indice du minimum des notes si t n'est pas vide sinon -1.
 **/
/// BEGIN SOLUTION
double indiceMinimumNotes(tabNotes t){
  int indice_min = 0;
  if(t.nbElts == 0){
    return -1;
  }

  for (int i=1; i < t.nbElts; i++){
      if(t.tab[i] < t.tab[indice_min]){
        indice_min = i;
      }
  }
  return indice_min;
}
/// END SOLUTION
/// BEGIN INITSOLUTION
/// int indiceMinimumNotes(...) {
///   if (t.nbElts == 0) {
///      /* Completer ici. */
///   }
///   for(...) {
///      /* Completer ici. */
///   }
///   /* Completer ici. */
/// }
/// END INITSOLUTION

/// BEGIN HIDDEN
void ajout(tabNotes &t, int Y) {
    if (t.nbElts < NB_MAX) {
        t.tab[t.nbElts] = Y;
        t.nbElts += 1;
    }
}


int main() {
    tabNotes X;
    X.nbElts = 0;
    ajout(X,0);
    ajout(X,20);

    tabNotes Y;
    Y.nbElts = 0;
    ajout(Y,I1);
    ajout(Y,I2);
    ajout(Y,I3);
    ajout(Y,I4);

    tabNotes Z;
    Z.nbElts = 0;
    ajout(Z,I5);

    tabNotes E;
    E.nbElts = 0;

    cout << indiceMinimumNotes(X) << endl;
    cout << indiceMinimumNotes(Y) << endl;
    cout << indiceMinimumNotes(Z) << endl;
    cout << indiceMinimumNotes(E) << endl;
}
/// END HIDDEN
