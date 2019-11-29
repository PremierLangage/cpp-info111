/// BEGIN HIDDEN
#include <iostream>
#include "randomization.h"
using namespace std;

int main() {
/// END HIDDEN
    int a, b, resultat;
    resultat = 0;
    a = 2;
    cin >> b;
    for ( int k = 0; k <= b; k++ ) {
        resultat = resultat + a * k;
    }
    cout << resultat << endl;
/// BEGIN HIDDEN
    return 0;
}
/// Objectif Pédagigique : comprendre une boucle for et faire un calcul simple : 2+4+6+8+10+12=42
/// END HIDDEN
