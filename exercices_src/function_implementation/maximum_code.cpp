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
/** Maximum de deux entiers
 *  @param a un entier
 *  @param b un entier
 *  @return le maximum entre a et b
 **/
int maximum(int a, int b){
/// BEGIN SOLUTION
  if (a > b) {
    return a;
  }
  else {
    return b;
  }
/// END SOLUTION
}

/// BEGIN HIDDEN
int main(){
  cout << maximum(I1,I2) << endl;
  cout << maximum(I2,I3) << endl;
  cout << maximum(I3,I1) << endl;
  cout << maximum(4,6) << endl;
  cout << maximum(-2,-6) << endl;
}
/// END HIDDEN
