#include <iostream>
using namespace std;

int F1(int I1) {
    int resultat = 1;
    for ( int I2 = 1; I2 <= I1; I2++ ) {
        resultat = resultat * I2;
    }
    return resultat;
}

int main() {
    int I3;
    I3 = 4;
    cout << I3 << "! = " << F1(I3) << endl;
    return 0;
}
