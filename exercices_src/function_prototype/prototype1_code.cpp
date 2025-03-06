/// BEGIN HIDDEN
#include <iostream>
using namespace std;
/// END HIDDEN

/* Ecrire ci-dessous l'en-tête de la fonction
   en n'oubliant pas de finir par {
   Regarder les appels dans le main ci-dessous pour
   voir le nom de la fonction et son utilisation */

/** Teste si a divise b
 * @param un entier a et un entier b
 * @return true si a divise b, false sinon
 **/
/// BEGIN SOLUTION
bool estDiviseur(int a, int b) {
/// END SOLUTION
    return b % a == 0;
}

int main(){
  cout << estDiviseur(2,8)<< endl;
  cout << estDiviseur(3,8)<< endl;
  return 0;
}
/// BEGIN HIDDEN
/// Objectif Pédagogique : écriture d'en-tête de fonction avec des types autres que int.
/// END HIDDEN

