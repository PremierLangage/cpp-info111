#include <iostream>

using namespace std;

/// BEGIN HIDDEN
#include "randomization.h"

CONST I = RANDOM_INT(2, 5);
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


int main() {
    tabNotes X;
    X.nbElts = 0;
    for(int i=0; i<I; i++){
        ajout(X, i);
    }

    cout << X.nbElts << " " << X.tab[0] << endl;
}