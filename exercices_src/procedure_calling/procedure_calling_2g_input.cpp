#include <iostream>

using namespace std;

void g(int i, int &j) {
    i = i + j;
}

void f(int &i, int &j) {
    i = i + 3;
    g(i, j);
}

int main() {
    int i;
    int j;
    cin >> i;
    j = i + 5;
    f(i, j);
    cout << i << endl;
    return 0;
}
