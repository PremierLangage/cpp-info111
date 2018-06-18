#include <iostream>
using namespace std;

int f(int x, int y) {
    x = x + 1;
    return y - 1;
}

int main() {
    int x, y;
    x = 1;
    y = 2;
    x = f(y, x);
    cout << x << ", " << y << endl;
}
