#include <iostream>

using namespace std;

void Pascal(int &acc, int n) {
    acc = 0;
    for (int i = n; i > 0; i--)
        acc += i;
}

int main() {
    int somme;
    Pascal(somme, 4);
    cout << somme << endl;

    return 0;
}
