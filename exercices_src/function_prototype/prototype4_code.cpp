/// BEGIN HIDDEN
#include <iostream>
#include <vector>
using namespace std;
/// END HIDDEN

/* Ecrire ci-dessous l'en-tête de la fonction
   en n'oubliant pas de finir par {
   Regarder les appels dans le main ci-dessous pour
   voir le nom de la fonction et son utilisation */

/** Affiche le contenu d'un tableau d'entiers
 * @param tab un tableau d'entiers
 **/
/// BEGIN SOLUTION
void affiche(vector<int> tab) {
/// END SOLUTION
    for (int i=0; i<tab.size(); i++) {
        cout << tab[i]<<endl;
    }
}

int main(){
  affiche( {3,2,5} );
  affiche( {7,4} );
  return 0;
}
/// BEGIN HIDDEN
/// Objectif Pédagogique : écriture d'en-tête de fonction avec des types autres que int.
/// END HIDDEN

