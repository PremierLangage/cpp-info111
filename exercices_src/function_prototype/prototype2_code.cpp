/// BEGIN HIDDEN
#include <iostream>
using namespace std;
/// END HIDDEN

/* Ecrire ci-dessous l'en-tête de la fonction
   en n'oubliant pas de finir par {
   Regarder les appels dans le main ci-dessous pour
   voir le nom de la fonction et son utilisation */

/** Multiplie un entier et un réel
 * @param un entier a et un réel b
 * @return le produit réel de a par b
 **/
/// BEGIN SOLUTION
float produit(int a, float b) {
/// END SOLUTION
    return a * b;
}

int main(){
  cout << produit(3, 2.5)<< endl;
  cout << produit(2, 5.4)<< endl;
  return 0;
}
/// BEGIN HIDDEN
/// Objectif Pédagogique : écriture d'en-tête de fonction avec des types autres que int.
/// END HIDDEN

