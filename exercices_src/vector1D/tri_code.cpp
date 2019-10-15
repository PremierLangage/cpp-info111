/// BEGIN HIDDEN
#include <iostream>
#include <vector>
#include "randomization.h"
using namespace std;

CONST TAB1 = RANDOM_VECTOR(RANDOM_INT(4, 7), RANDOM_INT, 0, 6);
CONST TAB2 = RANDOM_VECTOR(RANDOM_INT(4, 7), RANDOM_INT, 0, 6);
CONST TAB3 = RANDOM_VECTOR(RANDOM_INT(4, 7), RANDOM_INT, 0, 6);
CONST TAB4 = RANDOM_VECTOR(RANDOM_INT(4, 7), RANDOM_INT, 0, 6);
  
/// END HIDDEN
  /** Fonction estCroissant
   * @param t un tableau d’entiers
   * @return bool qui vaut true si et seulement si t est trié
   *         dans l'ordre croissant au sens large
   **/
bool estCroissant(vector<int> t){
  /// BEGIN SOLUTION
  for(int i = 0; i < (t.size() - 1); i++){
    if(t[i]>t[i+1]){
      return false;
    }
  }
  return true;
  /// END SOLUTION
}

/// BEGIN HIDDEN
int main(){
  cout << estCroissant(TAB1) << estCroissant(TAB2) << estCroissant(TAB3) << estCroissant(TAB4) << estCroissant({1,1,2,3}) << estCroissant({-1});
  return 0;
}
/// Objectif Pédagogique : fonction de vérification de tableau trié
/// EDN HIDDEN

