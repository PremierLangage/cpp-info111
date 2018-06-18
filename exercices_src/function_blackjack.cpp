#include <iostream>
using namespace std;

int max(int x, int y) {
    if (x > y) {
        return x;
    }
    return y;
}

int blackJack(int x, int y) {
    if (x > 21) {
        if (y > 21) {
            return 0;
        }
        return y;
    }
    if (y > 21) {
        return x;
    }
    return max(x, y);
}


int main() {
    int x, y;

    x = 15;
    y = 22;
    cout << max(x, y) << endl;
    cout << blackJack(x, y) << endl;

    x = 12;
    y = 17;
    cout << max(x, y) << endl;
    cout << blackJack(x, y) << endl;

    x = 23;
    y = 25;
    cout << max(x, y) << endl;
    cout << blackJack(x, y) << endl;
    return 0;
}
