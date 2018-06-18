#include <iostream>

using namespace std;


void  decrement(int &n) {
    n = n - 1;
}

int main() {
    int a = 7;
    decrement(a);
    cout << a << endl;
}


