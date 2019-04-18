/// BEGIN HIDDEN
#include<iostream>
using namespace std;
/// END HIDDEN
#define NB_MAX 10

struct Boite {
    int tab [NB_MAX];
    int nbElts;
};

/* Ecrire une procedure qui ajoute dans une Boite b un entier x si c'est possible
 * et qui imprime exactement le message "Ajout impossible!\n" sinon.
 */
/// BEGIN SOLUTION
void ajouteBoite (Boite &b, int x) {
  if (b.nbElts < NB_MAX) {
    b.tab[b.nbElts] = x;
    b.nbElts++;
  }
  else{
    cout << "Ajout impossible!\n";
  }
}
/// END SOLUTION
/// BEGIN INITSOLUTION
/// void ajouteBoite(...) {
/// /* Completer ici */
/// }
/// END INITSOLUTION

///BEGIN HIDDEN
void afficheBoite(Boite b) {
  for (int i=0; i < b.nbElts; i++){
    cout << b.tab[i] << " ";
  }
}

int main() {
  Boite b;
  b.nbElts = 0;
  for (int i=0; i < NB_MAX + 2; i++){
    ajouteBoite(b,i);
  }
  afficheBoite(b);
  return 0;
}
/// END HIDDEN
