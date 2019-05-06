/// BEGIN HIDDEN
#include <iostream>
#include <cmath>

using namespace std;
/// END HIDDEN
#define NB_MAX 10

struct Boite {
    int tab [NB_MAX];
    int nbElts;
};

// Completer la fonction dont voici la documentation :
/** Ajouter un entier dans une boite si c'est possible
 * @param[in/out] b : Boite à modifier
 * @param[in] x : entier à ajouter
 * @return True si l'entier a été ajouté, false sinon
 * @par exemple : Pour ajouter l'entier 5 à la boite `b` on écrira `ajouteBoite(b, 5)`
 **/
/// BEGIN SOLUTION
bool ajouteBoite (Boite &b, int x) {
    if (b.nbElts < NB_MAX) {
        b.tab[b.nbElts] = x;
        b.nbElts++;
        return true;
    }
    else{
        return false;
    }
}
/// END SOLUTION
/// BEGIN INITSOLUTION
/// bool ajouteBoite(...) {
/// /* Completer ici */
/// }
/// END INITSOLUTION

/// BEGIN HIDDEN
void afficheBoite(Boite b) {
    for (int i=0; i < b.nbElts; i++){
        cout << b.tab[i] << " ";
    }
}

int main() {
  Boite b;
  b.nbElts = 0;
  for (int i=0; i < NB_MAX + 2; i++){
    cout << ajouteBoite(b,i) << endl;
  }
  afficheBoite(b);
  return 0;
}
/// END HIDDEN
