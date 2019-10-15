#include <iostream>
using namespace std;

int main() {
    int v = 1;
    int s;

    while (2 * v < 42) {
        v = 2 * v;
    }

    cin >> s;
    cout << v + s << endl;

}
