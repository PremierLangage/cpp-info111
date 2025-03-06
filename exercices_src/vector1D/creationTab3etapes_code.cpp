/// BEGIN HIDDEN
/// Objectif Pédagogique : construction d'un tableau avec les 3 étapes

#include <iostream>
#include <vector>
#include "randomization.h"
using namespace std;

CONST N = RANDOM_INT(100, 200);
CONST V = RANDOM_INT(0, 42);

int main(){
/// END HIDDEN
    // Construire un tableau nommé t de N entiers, tous initialisés à V.
/// BEGIN SOLUTION
    vector<int> t;
    t = vector<int>(N);
    for (int i=0; i<N; i++){
        t[i] = V;
    }
/// END SOLUTION
/// BEGIN HIDDEN
    cout << t << endl;
    return 0;
}
/// END HIDDEN

