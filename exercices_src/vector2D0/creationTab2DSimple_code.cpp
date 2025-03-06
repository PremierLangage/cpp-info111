/// BEGIN HIDDEN
/// Objectif Pédagogique : Savoir créer un tableau 2D simple (pas forcément besoin des 3 étapes)

#include <iostream>
#include <vector>
#include "randomization.h"
using namespace std;

CONST T00 = RANDOM_INT(0, 5);
CONST T01 = RANDOM_INT(0, 5);
CONST T02 = RANDOM_INT(0, 5);
CONST T10 = RANDOM_INT(0, 5);
CONST T11 = RANDOM_INT(0, 5);
CONST T12 = RANDOM_INT(0, 5);

int main(){
/// END HIDDEN
    /* Écrire ici le code permettant de créér un tableau d'entiers
       de deux lignes et trois colonnes dont la première ligne contient
       les éléments T00, T01, T02 et la seconde les éléments T10, T11, T12.
       Attention, vous devez nommer ce tableau t. */
/// BEGIN SOLUTION
    vector<vector<int>> t = { {T00, T01, T02}, {T10, T11, T12} };
/// END SOLUTION
/// BEGIN HIDDEN
    cout << t;
    return 0;
}
/// END HIDDEN

