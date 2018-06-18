#include <iostream>
using namespace std;

int main() {
    int a, b;
    a = 7;
    b = 4;

    a = b;
    b = a;

    cout << a << endl;
    cout << b << endl;
    return 0;
}
