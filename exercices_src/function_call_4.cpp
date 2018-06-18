#include <iostream>
using namespace std;

int g(int x, int y) {
    x = x + 1;
    return y - 1;
}

int main() {
    int x, y;
    x = 1;
    y = 2;
    g(x, y);
    cout << x << ", " << y << endl;
}
