/// BEGIN HIDDEN
#include <iostream>
using namespace std;
/// END HIDDEN

/* Ecrire ci-dessous l'en-tête de la fonction
   en n'oubliant pas de finir par {
   Regarder les appels dans le main ci-dessous pour
   voir le nom de la fonction et son utilisation */

/** compte le nombre de caractères d'une chaîne de caractères
 * @param une chaîne de caractères a
 * @return le nombre de caractères de s
 **/
/// BEGIN SOLUTION
int nbCaracteres(string a) {
/// END SOLUTION
    return a.size();
}

int main(){
  cout << nbCaracteres("bonjour")<< endl;
  cout << nbCaracteres("aujourd'hui")<< endl;
  return 0;
}
/// BEGIN HIDDEN
/// Objectif Pédagogique : écriture d'en-tête de fonction avec des types autres que int.
/// END HIDDEN

