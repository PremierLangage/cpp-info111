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
vector<vector<int>> tabPresque1      = { { 1,  2, 3 },
                                         { 4,  5 },
                                         { 6,  7 } };
vector<vector<int>> tabPresque2      = { { 1,  2, 3 },
                                         { 4,  5, 6 },
                                         { 6,  7 } };
/// END HIDDEN

/** Teste si un tableau 2D est rectangle
* @param t un tableau à 2 dimensions d’entiers
* @return booléen qui vaut true si et seulement si
*     toutes les lignes de t ont le même nombre d'éléments
**/
bool estRectangle(vector<vector<int>> t){
/// BEGIN SOLUTION
   int n = t[0].size();
   for(int i = 1; i < t.size(); i++){
       if(t[i].size() != n){
          return false;
       }
   }
   return true;
/// END SOLUTION
}

/// BEGIN HIDDEN
int main(){
  cout << estRectangle(tabCarre) << estRectangle(tabRectangulaire);
  cout << estRectangle(tabPresque1) << estRectangle(tabPresque2) << estRectangle(tabBizarre);
  return 0;
}
/// Objectif Pédagogique : parcours de tableau 2D, return pas trop tôt (erreur classique du if/else dans la boucle)
/// END HIDDEN

