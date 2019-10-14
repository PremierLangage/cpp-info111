#include <iostream>
using namespace std;

int main() {
    int n, resultat;

    n = 5;
    resultat = 1;

    for ( int k = 1; k <= n; k++ ) {
        resultat = resultat * k;
    }

    cout << resultat << endl;

    return 0;
}
