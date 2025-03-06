/// BEGIN HIDDEN
#include <iostream>
#include <vector>
using namespace std;
/// END HIDDEN

/* Ecrire ci-dessous l'en-tête de la fonction
   en n'oubliant pas de finir par {
   Regarder les appels dans le main ci-dessous pour
   voir le nom de la fonction et son utilisation */

/** Affiche un compte à rebours commençant par l'entier pris en paramètre
 * @param n un entier
 **/
/// BEGIN SOLUTION
void afficheCompteARebours(int n) {
/// END SOLUTION
    for (int i=n; i>=0; i--) {
        cout << i << endl;
    }
}

int main(){
  afficheCompteARebours(5);
  return 0;
}
/// BEGIN HIDDEN
/// Objectif Pédagogique : écriture d'en-tête de fonction avec des types autres que int.
/// END HIDDEN

