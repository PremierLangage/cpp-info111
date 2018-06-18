#include <iostream>

using namespace std;

struct blob {
    string nom;
    int a;
    int b;
    int lg;
    bool lock;
};

void swap(blob &x) {
    char tmp;
    tmp = x.nom[x.a];
    x.nom[x.a] = x.nom[x.b];
    x.nom[x.b] = tmp;
    x.a = (x.a + x.b) % x.lg;
    x.b = (x.a * x.b) % x.lg;
    if (x.a == x.b)
        x.lock = true;
}

int main() {
    blob truc = {"info121rocks",
                 3,
                 5,
                 12,
                 false
                };
    while (!truc.lock) swap(truc);
    cout << truc.nom << endl;
    return 0;
}
