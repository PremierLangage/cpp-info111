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

    double dx = fabs(p1.x - p2.x);
    double dy = fabs(p1.y - p2.y);
    double dz = fabs(p1.z - p2.z);

    cout << dx << " " << dy << " " << dz << endl;

    return 0;
}