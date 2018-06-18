#include <iostream>
using namespace std;

double max(double a, double b) {
    if ( a >= b ) {
        return a;
    } else {
        return b;
    }
}

int main() {
    cout << max(1.0, 3.0) << endl;
    cout << max(5.0, 2.0) << endl;
    cout << max(2.0, 2.0) << endl;
    return 0;
}
