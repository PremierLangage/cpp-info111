#include <iostream>
using namespace std;

int main () {
    int x, y;
    y = -3;
    x = -y;
    if ( y > 0 ) {
        y = 2 * x;
    } else {
        y = -y;
    }
    cout << x << ", " << y << endl;
}
