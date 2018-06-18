#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    a = 7;
    b = 4;

    c = b;
    b = a;
    a = c;

    cout << a << endl;
    cout << b << endl;
    return 0;
}
