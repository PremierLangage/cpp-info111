/// BEGIN HIDDEN
// Objective : simple manipulations of struct of struct
#include <iostream>
#include <cmath>

using namespace std;

#include "randomization.h"
CONST P1X = RANDOM_INT( -3, 5);
CONST P1Y = RANDOM_INT( -3, 5);
CONST P2X = RANDOM_INT( -3, 5);
CONST P2Y = RANDOM_INT( -3, 5);

/// END HIDDEN

struct Point2D {
    double x;
    double y;
};

struct Cercle {
    Point2D centre;
    double rayon;
};

int main() {
    Point2D p1 = {P1X, P1Y};
    Point2D p2 = {P2X, P2Y};
    Cercle c1, c2;

    c1.centre = p1;
    c1.rayon = fabs(p1.x - p2.x);

    c2.centre = p2;
    c2.rayon = fabs(p1.y - p2.y);

    c2.centre.x PLUSOUMOINS= c1.centre.x;
    c2.centre.y PLUSOUMOINS= c1.centre.y;
    c2.rayon += c1.rayon;

    cout << c2.centre.x << " " << c2.centre.y << " " << c2.rayon << endl;

    return 0;
}
