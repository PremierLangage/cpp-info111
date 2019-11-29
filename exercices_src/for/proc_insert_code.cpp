// BEGIN HIDDEN
#include <iostream>
#include <cmath>

using namespace std;
#include "randomization.h"

CONST n = RANDOM_INT(4,8);
/// END HIDDEN
#define N n

/** Permute les �l�ments d'un tableau qu'on consid�re rempli.
 *  Tous les �l�ments sont d�cal�s vers la droite et le dernier �l�ment est mis en premi�re position.
 * @param[in] tab: le tableau d'entiers de taille N
 *  @return ne renvoit rien car c'est une proc�dure
**/
void permuter(int tab[]) {
        /// BEGIN SOLUTION
        int tmp=tab[N-1];
        for (int i=N-1;i>0;i--){
            tab[i]=tab[i-1];
        }
        tab[0]=tmp;
        /// END SOLUTION
}

/// BEGIN HIDDEN
int main() {
  int t[N];
  for(int i=0; i < N; i++){
    t[i] = i;
  }
  permuter(t);
  cout << "Tableau permut�: ";
  for(int i=0; i < N; i++){
    cout << t[i] << ", ";
  }
}
/// END HIDDEN
