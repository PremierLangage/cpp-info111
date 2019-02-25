#include <iostream>
#include <cmath>

using namespace std;

/// BEGIN HIDDEN
#include "randomization.h"
CONST V1 = RANDOM_VECTOR(3, RANDOM_INT, -5, 5);
CONST V2 = RANDOM_VECTOR(3, RANDOM_INT, -5, 5);
/// END HIDDEN


struct Point3D {
    double x;
    double y;
    double z;
};

int main() {
    Point3D p1 = V1;
    Point3D p2 = V2;

    double dx = fabs(p1.x - p2.x);
    double dy = fabs(p1.y - p2.y);
    double dz = fabs(p1.z - p2.z);

    cout << dx << " " << dy << " " << dz << endl;

    return 0;
}
