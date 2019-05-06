/// BEGIN HIDDEN
#include <iostream>
#include "randomization.h"
using namespace std;

CONST I1 = RANDOM_INT(1,10);
CONST I2 = RANDOM_INT(1,10);
CONST I3 = RANDOM_INT(1,10);
CONST I4 = RANDOM_INT(1,10);
CONST I5 = RANDOM_INT(1,10);
CONST NAME = RANDOM_CHOICE("cirrus", "cirro-cumulus", "cirro-stratus", "altocumulus", "altostratus", "nimbostratus", "stratocumulus", "stratus", "cumulus", "cumulonimbus");
/// END HIDDEN

struct Point3D {
    int x, y, z;
};

struct List3D {
    string id_nuage;
    Point3D nuage[4];
};

Point3D Myst(List3D liste) {
    Point3D candidat = liste.nuage[0];

    for (int i = 1; i < 4 ; i++) {
        if (liste.nuage[i].X < candidat.X)
            candidat = liste.nuage[i];
    }
    return candidat;
}

Point3D nouveaupoint(int x, int y, int z) {
    Point3D p = {x, y, z};
    return p;
}

int main() {
    List3D liste;
    liste.id_nuage = NAME;

    liste.nuage[0] = nouveaupoint(I1, I2, I3);
    liste.nuage[1] = nouveaupoint(I1, I4, I2);
    liste.nuage[2] = nouveaupoint(I2, I4, I5);
    liste.nuage[3] = nouveaupoint(I1, I3, I5);

    Point3D m = Myst(liste);
    
    cout << liste.id_nuage << endl;
    cout << m.x + m.y + m.z << endl;
    return 0;
}

