#include <iostream>
#include <cmath>

using namespace std;

struct Point3D {
    double x;
    double y;
    double z;
};

int main() {
    Point3D p1 = {0, 4, 3};
    Point3D p2 = {-5, 7, 1};

    double x0 = fabs(p1.x + p2.x);
    double y0 = fabs(p1.y + p2.y);
    double z0 = fabs(p1.z + p2.z);

    cout << x0 << " " << y0 << " " << z0 << endl;

    return 0;
}
