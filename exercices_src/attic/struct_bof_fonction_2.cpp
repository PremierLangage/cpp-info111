#include<iostream>
#include<math.h>
#define M_PIl          3.141592653589793238462643383279502884L /* pi */
#include <iomanip>
#include <stdio.h>
using namespace std;


struct cordonnee_polaire {
    float R, Teta;
};

struct cordonnee_cartesienne {
    float x, y;
};


cordonnee_cartesienne transforme(cordonnee_polaire a) {
    cordonnee_cartesienne c;
    c.x = a.R * cos(a.Teta);
    c.y = a.R * sin(a.Teta);
    return (c);
}



int main() {
    cordonnee_polaire c1;
    cordonnee_cartesienne c2;
    c1.R = 1;
    c1.Teta = 30 * M_PIl / 180; // transformer les degrés en radians
    c2 = transforme(c1);
    if ((c2.x) > (c2.y)) {
        cout << "x=" << setprecision(2) << (c2.x) << endl;
    } else {
        cout << "y=" << setprecision(2) << (c2.y) << endl;
    }
    return 0;
}
