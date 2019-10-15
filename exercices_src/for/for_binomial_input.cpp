#include <iostream>
using namespace std;

int main() {
    int a, b, resultat;
    resultat = 0;
    a = 2;
    cin >> b;
    for ( int k = 0; k <= b; k++ ) {
        resultat = resultat + a * k;
    }
    cout << resultat << endl;
    return 0;
}
