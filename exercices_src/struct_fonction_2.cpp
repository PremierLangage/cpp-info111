#include <iostream>
#include <cmath>

using namespace std;

struct Vect {
    double x;
    double y;
};

Vect f(Vect v1, Vect v2) {
    Vect resultat;
    resultat.x = v1.x - v2.x;
    resultat.y = v1.y - v2.y;
    return resultat;
}

int main() {
    Vect a = { 5, -3};
    Vect b = {-8, -5};
    Vect c = f(a, b);

    cout << c.x << " " << c.y << endl;

    return 0;
}
