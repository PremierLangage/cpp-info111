#include <iostream>

using namespace std;

/// BEGIN HIDDEN
#include "randomization.h"
/// END HIDDEN
#define NB_MAX 10

struct tabNotes {
    int tab[NB_MAX];
    int nbElts;
};

void ajout(tabNotes &t, int Y) {
    if (t.nbElts < NB_MAX) {
        t.tab[t.nbElts] = Y;
        t.nbElts += 1;
    }
}

/** Calcule la moyenne de deux series de notes
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
bool egalMoyenneTabNotes(tabNotes a, tabNotes b){
    return (moyenneTabNotes(a) == moyenneTabNotes(b));
}


int main() {
    tabNotes X;
    X.nbElts = 0;
    ajout(X,0);
    ajout(X,20);
    
    tabNotes Y;
    ajout(Y,8);
    ajout(Y,10);
    ajout(Y,12);
    
    tabNotes Z;
    ajout(Y,5);

    cout << egalMoyenneTabNotes(X,Y) << endl;
    cout << egalMoyenneTabNotes(X,Z) << endl;
}
/// END HIDDEN