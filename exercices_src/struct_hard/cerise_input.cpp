/// BEGIN HIDDEN
#include <iostream>

using namespace std;
/// END HIDDEN

struct cerise {
    int gauche;
    int queue;
    int droite;
};

struct cerisier {
    cerise cerise_gauche;
    int cime;
    cerise cerise_droite;
};

void initialise_cerise(cerise &miam, int val) {
    miam.gauche = val - 1;
    miam.queue = val;
    miam.droite = val + 1;
}

void initialise_cerisier(cerisier &arbre, int val) {
    initialise_cerise(arbre.cerise_gauche, val - 2);
    arbre.cime = val;
    initialise_cerise(arbre.cerise_droite, val + 2);
}

int somme_cerise(cerise miam) {
    return miam.queue + miam.gauche + miam.droite;
}

int main() {
    int n;
    cerisier arbre;
    cin >> n;
    initialise_cerisier(arbre, n);
    cout << arbre.cime + somme_cerise(arbre.cerise_gauche) + somme_cerise(
             arbre.cerise_droite) << endl;
    return 0;
}
