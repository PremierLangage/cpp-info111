#include <iostream>
using namespace std;

int main() {
    int a = 3;
    int b = 2;
    if (a + b - 1 == 3) {
        a = a + 1;
        b = b + 1;
    } else {
        a = a - 1;
        b = b + 2;
    }
    cout << a << " " << b << endl;
}
