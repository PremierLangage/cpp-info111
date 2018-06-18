#include <iostream>

using namespace std;

struct obif {
    int a;
    int b;
    int c;
    int d;
};

obif step(obif m) {
    obif nouveau;
    nouveau.a = m.a * m.a + m.b * m.c;
    nouveau.b = m.b * (m.a + m.d);
    nouveau.c = m.c * (m.a + m.d);
    nouveau.d = m.d * m.d + m.b * m.c;
    return nouveau;
}

int main() {
    obif truc = {1, 1, 1, 0};
    for (int p = 3; p > -3; p = p - 2) {
        truc = step(truc);
    }
    cout << truc.b << endl;
    return 0;
}
