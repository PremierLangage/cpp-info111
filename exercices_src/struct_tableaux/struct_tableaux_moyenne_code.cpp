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
/** Calcule la moyenne d'une serie de notes
 *  @param[in] t: tableau (structure) de notes 
 *  @return: moyenne des notes.
 *
 *  Si aucune note, renvoyer 0.
 */
/// BEGIN SOLUTION
double moyenneTabNotes(tabNotes t){
    if (t.nbElts == 0) return 0;
    else {
        double tmp = 0.0;
        for (int i=0; i<t.nbElts; i++){
            tmp += t.tab[i];
	}
	return tmp/t.nbElts;
    }
}
/// END SOLUTION
/// BEGIN INITSOLUTION
/// double moyenneTabNotes(...) {
///   if (t.nbElts == 0) {
///      /* Completer ici. */
///   }
///   else {
///      /* Completer ici. */
///   }
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
    
    
    cout << moyenneTabNotes(X) << endl;
    cout << moyenneTabNotes(Y) << endl;
    cout << moyenneTabNotes(Z) << endl;
    cout << moyenneTabNotes(E) << endl;
}
/// END HIDDEN
