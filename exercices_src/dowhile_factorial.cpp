#include <iostream>
using namespace std;

int main() {
    int n, resultat;

    n = 4;
    resultat = 1;

    do {
        resultat = resultat * n;
        n = n - 1;
    } while (n > 0);

    cout << resultat << endl;

    return 0;
}
