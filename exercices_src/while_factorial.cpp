#include <iostream>
using namespace std;

int main() {
    int n, resultat;

    n = 3;
    resultat = 1;

    while (n > 0) {
        resultat = resultat * n;
        n = n - 1;
    }

    cout << resultat << endl;

    return 0;
}
