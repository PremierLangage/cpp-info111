#include <iostream>

using namespace std;


void  decrement(int &n) {
    n = n - 1;
}

int main() {
    int a = 5;
    for (int i = 1; i <= 2; i++) {
        decrement(a);
    }
    cout << a << endl;
}


