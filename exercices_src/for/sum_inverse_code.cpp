/// Objectif Pédagogique : for dans une fonction avec accumulateur
/// BEGIN HIDDEN
#include <iostream>
#include <vector>
#include "randomization.h"
using namespace std;
/// END HIDDEN

/** Fonction maSomme
 * @param n un entier
 * @return un réel qui est la somme des 1/k pour k entre 1 et n si n >= 1, 0 sinon
 **/
float maSomme(int n){
  /// BEGIN SOLUTION
  float res = 0;
  for(int k=1; k<=n; k++){
    res += 1.0/k;
  }
  return res;
  /// END SOLUTION
  /// BEGIN INITSOLUTION
  ///   // VOTRE CODE ICI
  /// END INITSOLUTION
}

/// BEGIN HIDDEN
int main(){
  for(int k=-2; k < 10; k++){
    cout << maSomme(k) << endl;
  }
  return 0;
}
/// END HIDDEN
