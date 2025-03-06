/// BEGIN HIDDEN
#include <iostream>
#include <vector>
#include "randomization.h"
using namespace std;

void affiche(vector<int> tab) {
    int taille=tab.size();
    for (int i=0; i<taille; i++) {
        cout << tab[i]<<endl;
    }
}

int main(){
/// END HIDDEN
    /* Ecrire ici le code permettant de créér un tableau d'entiers
       de 3 cases contenant les éléments 5, 1 et 4.
       Attention, vous devez appeler ce tableau t pour que votre
       solution soit considérée comme juste. */
/// BEGIN SOLUTION
    vector<int> t = {5, 1, 4};
/// END SOLUTION
/// BEGIN HIDDEN
    affiche(t);
    return 0;
}
/// Objectif Pédagogique : Savoir créer un tableau simple (pas forcément besoin des 3 étapes)
/// END HIDDEN

