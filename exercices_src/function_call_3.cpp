#include <iostream>
using namespace std;

void f(int x, int y) {
    x = x + 1;
    y = y - 1;
}

int main() {
    int x, y;
    x = 1;
    y = 2;
    f(y, x);
    cout << x << ", " << y << endl;
}
