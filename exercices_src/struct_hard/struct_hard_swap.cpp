/// BEGIN HIDDEN
#include <iostream>

using namespace std;

#include "randomization.h"
CONST S = RANDOM_CHOICE("Info121IsTheBest", "ILoveInformatique", "ViiiiiiveLeC++!!", "CoderJoursEtNuits");
CONST I1 = RANDOM_INT(1,6);
CONST I2 = RANDOM_INT(7,15);
/// END HIDDEN

struct blob {
    string nom;
    int a;
    int b;
    bool lock;
};

void swap(blob &x) {
    char tmp;
    tmp = x.nom[x.a];
    x.nom[x.a] = x.nom[x.b];
    x.nom[x.b] = tmp;
    x.a++;
    x.b--;
    if (x.a >= x.b)
        x.lock = true;
}

int main() {
    blob truc = {S, I1, I2, false};
    while (!truc.lock) swap(truc);
    cout << truc.nom << endl;
    return 0;
}
