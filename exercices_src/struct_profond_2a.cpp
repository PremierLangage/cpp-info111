#include <iostream>
#include <cmath>

using namespace std;

struct Point2D {
    double x;
    double y;
};

struct Cercle {
    Point2D centre;
    double rayon;
};

int main() {
    Point2D p1 = {-2, 3};
    Point2D p2 = {4, -1};
    Cercle c1, c2;

    c1.centre = p2;
    c1.rayon = fabs(p1.x - p2.x);

    c2.centre = p1;
    c2.rayon = fabs(p1.y - p2.y);

    c2.centre.x += c1.centre.x;
    c2.centre.y += c1.centre.y;
    c2.rayon += c1.rayon;

    cout << c2.centre.x << " " << c2.centre.y << " " << c2.rayon << endl;

    return 0;
}
