/// BEGIN HIDDEN
#include <iostream>
#include <cmath>

using namespace std;
/// END HIDDEN
struct Point3D {
    double x;
    double y;
    double z;
};

// Completer la fonction dont voici la documentation :
/** Test l'égalité entre deux Points 3D.
 *  @param[in] a, b : Points 3D 
 *  @return true si et seulement si les 2 points en entré sont égaux.
 */
/// BEGIN SOLUTION
bool egualPoint3D(Point3D a, Point3D b) {
    return ((a.x == b.x) && (a.y == b.y) && (a.z == b.z));
}
/// END SOLUTION
/// BEGIN INITSOLUTION
/// bool egualPoint3D(...) {
///   /* Completer ici. */
/// };
/// END INITSOLUTION

/// BEGIN HIDDEN
int main() {
    Point3D p0 = {0, 0, 0};
    Point3D px = {1, 0, 0};
    Point3D py = {0, 1, 0};
    Point3D pz = {0, 0, 1};
    Point3D p  = {1, 1, 1};
  
    cout << egualPoint3D(p0, px) << endl;
    cout << egualPoint3D(p0, py) << endl;
    cout << egualPoint3D(p0, pz) << endl;
    cout << egualPoint3D(p0, p) << endl;
    cout << egualPoint3D(p, p) << endl;
    
    return 0;
}
/// END HIDDEN

