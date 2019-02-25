#include <iostream>
#include <cmath>

using namespace std;

/// BEGIN HIDDEN
#include "randomization.h"
CONST I11 = RANDOM_INT(-5, 5);
CONST I12 = RANDOM_INT(-5, 5);
CONST I21 = RANDOM_INT(-5, 5);
CONST I22 = RANDOM_INT(-5, 5);
/// END HIDDEN


struct Vect {
    int x;
    int y;
};

Vect f(Vect v1, Vect v2) {
    Vect resultat;
    resultat.x = v1.x PLUSOUMOINS v2.x;
    resultat.y = v1.y PLUSOUMOINS v2.y;
    return resultat;
}

int main() {
    Vect a = {I11, I12};
    Vect b = {I21, I22};
    Vect c = f(a, b);

    cout << c.x << " " << c.y << endl;

    return 0;
}
