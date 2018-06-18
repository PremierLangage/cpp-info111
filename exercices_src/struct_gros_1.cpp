#include <iostream>

using namespace std;

struct Point2D {
    int x, y;
};

struct List2D {
    string id_nuage;
    Point2D nuage[3];
};

Point2D Myst(List2D liste) {
    Point2D candidat = liste.nuage[0];

    for (int i = 1; i < 3; i++) {
        if (liste.nuage[i].x < candidat.x)
            candidat = liste.nuage[i];
    }
    return candidat;
}

Point2D nouveaupoint(int x, int y) {
    Point2D p = {x, y};
    return p;
}

int main() {
    List2D liste;
    liste.id_nuage = "Cumulonimbus";

    liste.nuage[0] = nouveaupoint(3, 8);
    liste.nuage[1] = nouveaupoint(2, 12);
    liste.nuage[2] = nouveaupoint(2, 4);

    cout << Myst(liste).y << endl;
    return 0;
}

