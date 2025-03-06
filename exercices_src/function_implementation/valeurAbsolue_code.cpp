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
/** Valeur absolue d'un entier
 *  @param num un entier relatif
 *  @return la valeur absolue de l'entier
 **/
int valeurAbsolue(int num){
/// BEGIN SOLUTION
  if (num > 0){
    return num;
  }
  else{
    return -num;
  }
/// END SOLUTION
}

/// BEGIN HIDDEN
int main(){
  cout << valeurAbsolue(I1) << endl;
  cout << valeurAbsolue(I2) << endl;
  cout << valeurAbsolue(I3) << endl;
  cout << valeurAbsolue(543) << endl;
  cout << valeurAbsolue(-247) << endl;
}
/// END HIDDEN
