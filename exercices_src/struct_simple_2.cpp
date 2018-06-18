#include <iostream>
#include <cmath>

using namespace std;

struct Point3D {
    double x;
    double y;
    double z;
};

int main() {
    Point3D p1 = {5, -3, 2};
    Point3D p2 = {8, 2, 6};

    double dx = fabs(p1.x - p2.x);
    double dy = fabs(p1.y - p2.y);
    double dz = fabs(p1.z - p2.z);

    cout << dx << " " << dy << " " << dz << endl;

    return 0;
}