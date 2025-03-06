/// BEGIN HIDDEN
#include <iostream>
#include <vector>
#include "randomization.h"
using namespace std;

vector<vector<int>> tabCarre         = { { 1,  2, 3 },
                                         { 4, 11, 6 },
                                         { 9, 12, 7 } };
vector<vector<int>> tabRectangulaire = { { 1,  2, 3 },
                                         { 9, 12, 7 } };
vector<vector<int>> tabBizarre       = { { 1,  2, 3 },
                                         { 4,  5 },
                                         { 6,  7, 8, 10 } };
vector<vector<int>> tabPresque1      = { { 1,  2 },
                                         { 4,  5, 9 },
                                         { 6,  7, 3 } };
vector<vector<int>> tabPresque2      = { { 1,  2, 3 },
                                         { 4,  5, 6 },
                                         { 6,  7 } };
/// END HIDDEN

/** Teste si un tableau 2D est carré
* @param t un tableau à 2 dimensions d’entiers
* @return booléen qui vaut true si et seulement si toutes les lignes de t
*         ont leur nombre d'éléments égal au nombre de lignes de t.
**/
bool estCarre(vector<vector<int>> t){
/// BEGIN SOLUTION
   int n = t.size();
   for(int i = 0; i < t.size(); i++){
       if(t[i].size() != n){
          return false;
       }
   }
   return true;
/// END SOLUTION
}

/// BEGIN HIDDEN
int main(){
  cout << estCarre(tabCarre) << estCarre(tabRectangulaire);
  cout << estCarre(tabPresque1) << estCarre(tabPresque2) << estCarre(tabBizarre);
  return 0;
}
/// Objectif Pédagogique : parcours de tableau 2D, return pas trop tôt (erreur classique du if/else dans la boucle)
/// END HIDDEN

