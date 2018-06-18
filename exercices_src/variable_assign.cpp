#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    a = 0;
    b = 0;
    c = 0;
    d = 0;

    cout << a << " " << b << " " << c << " " << d << endl;
    a = 1;
    cout << a << " " << b << " " << c << " " << d << endl;
    b = 3;
    cout << a << " " << b << " " << c << " " << d << endl;
    a + b;
    cout << a << " " << b << " " << c << " " << d << endl;
    a - b;
    cout << a << " " << b << " " << c << " " << d << endl;
    a = a + 2 * b;
    cout << a << " " << b << " " << c << " " << d << endl;
    c + b;
    cout << a << " " << b << " " << c << " " << d << endl;
    return 0;
}
