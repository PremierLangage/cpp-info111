#include <iostream>

using namespace std;

int Pascal(int &acc, int n) {
    acc = 0;
    for (int i = n; i > 0; i--)
        acc += i;
    return acc;
}

int main() {
    int somme;
    Pascal(somme, 4);
    cout << somme << endl;

    return 0;
}
