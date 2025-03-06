/// BEGIN HIDDEN
/// Objectif Pédagogique : Ecriture du code d'une fonction simple.

#include <iostream>
#include "randomization.h"
using namespace std;

CONST I1 = RANDOM_INT(-20, 20);
CONST I2 = RANDOM_INT(-20, 20);
CONST I3 = RANDOM_INT(-20, 20);
/// END HIDDEN

// Completer la fonction dont voici la documentation :
/** Aire d'un rectangle
 *  Rappel: l'aire vaut la largeur multiplée par la longueur
 *  @param a un entier: la largeur du rectangle
 *  @param b un entier: la longueur du rectangle
 *  @return l'aire du rectangle
 **/
int aireRectangle(int a, int b){
/// BEGIN SOLUTION
    return a * b;
/// END SOLUTION
}

/// BEGIN HIDDEN
int main(){
  cout << aireRectangle(I1,I2) << endl;
  cout << aireRectangle(I2,I3) << endl;
  cout << aireRectangle(I3,I1) << endl;
  cout << aireRectangle(4,6) << endl;
  cout << aireRectangle(10,2) << endl;
}
/// END HIDDEN
