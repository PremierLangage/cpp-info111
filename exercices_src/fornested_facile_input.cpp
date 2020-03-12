#include <iostream>
using namespace std;

int main() {
    int a, b, resultat;
    resultat = 0;
    a = 3;
    cin >> b;
    for ( int k = 0; k < a; k++ ) {
        for ( int l = 0; l < b; l++) {
            resultat = resultat + 2;
        }
    }
    cout << resultat << endl;
}
