#include <iostream>

using namespace std;

/// BEGIN HIDDEN
#include "randomization.h"
CONST A1 = RANDOM_INT(-5, 5);
CONST A2 = RANDOM_INT(-5, 5);
CONST A3 = RANDOM_INT(-5, 5);
CONST B1 = RANDOM_INT(-5, 5);
CONST B2 = RANDOM_INT(-5, 5);
CONST B3 = RANDOM_INT(-5, 5);
/// END HIDDEN

struct Point2D {
    double abs;
    double ord;
};

void milieu(Point2D x, Point2D y, Point2D &z) {
    z.abs = (x.abs + y.abs)/2;
    z.ord = (x.ord + y.ord)/2;
}


int main() {
    Point2D X = { A1, B1 };
    Point2D Y = { A2, B2 };
    Point2D Z = { A3, B3 };

    milieu(Y, Z, X);

    cout << Z.abs << " " << Z.ord << endl;
}
