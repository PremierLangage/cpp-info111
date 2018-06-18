#include <iostream>

using namespace std;


void  decrement(int &n) {
    n = n - 1;
}

int main() {
    int a = 5;
    int b = -a;
    decrement(b);
    cout << a << endl;
}


