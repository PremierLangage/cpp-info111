#include <iostream>

using namespace std;


void  increment(int &n) {
    n = n + 1;
}

int main() {
    int a = 7;
    increment(a);
    cout << a << endl;
}


