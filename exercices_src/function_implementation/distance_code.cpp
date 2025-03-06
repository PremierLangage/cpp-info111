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
/** Distance entre deux entiers
 *  Rappel: la distance est la différence entre le plus grand et le plus petit
 *  @param a un entier
 *  @param b un entier
 *  @return la distance entre a et b
 **/
int distance(int a, int b){
/// BEGIN SOLUTION
  if (a < b) {
    return b-a;
  }
  else {
    return a-b;
  }
/// END SOLUTION
}

/// BEGIN HIDDEN
int main(){
  cout << distance(I1,I2) << endl;
  cout << distance(I2,I3) << endl;
  cout << distance(I3,I1) << endl;
  cout << distance(4,6) << endl;
  cout << distance(-2,-6) << endl;
}
/// END HIDDEN
