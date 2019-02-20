#include <iostream>

using namespace std;

void Blaise(int &acc, int n) {
    acc = n * (n PLUSOUMOINS 1) / 2;
}

int main() {
    int prod;

    Blaise(prod, 5);
    cout << prod << endl;

    return 0;
}
