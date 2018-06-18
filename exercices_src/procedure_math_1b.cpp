#include <iostream>

using namespace std;

void somme(int &b, int n) {
    b = 0;
    for (int i = n; i > 0; i--)
        b += i;
}

int main() {
    int a;
    somme(a, 4);
    cout << a << endl;

    return 0;
}
