/// BEGIN HIDDEN
#include <iostream>

using namespace std;

#include "randomization.h"
CONST A1 = double(RANDOM_INT(-5, 5));
CONST A2 = double(RANDOM_INT(-5, 5));
CONST A3 = double(RANDOM_INT(-5, 5));
CONST B1 = double(RANDOM_INT(-5, 5));
CONST B2 = double(RANDOM_INT(-5, 5));
CONST B3 = double(RANDOM_INT(-5, 5));
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
    Point2D x = { A1, B1 };
    Point2D y = { A2, B2 };
    Point2D z = { A3, B3 };

    milieu(Y, Z, X);

    cout << X.abs << " " << X.ord << endl;
}
