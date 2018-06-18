#include <iostream>
using namespace std;

int f(int n) {
    int i;
    int cpt = 0;
    for (i = 1; i <= n; i++) {
        cpt = cpt + i;
    }
    return cpt;
}

int main() {
    if (f(5) < 11) {
        cout << "Petit" << endl;
    } else {
        cout << "Grand" << endl;
    }
}
