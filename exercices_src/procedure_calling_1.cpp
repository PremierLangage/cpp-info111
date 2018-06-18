#include <iostream>

using namespace std;

void g(int i) {
    i = i * 2;
}

void f(int &i) {
    i = i + 3;
    g(i);
}

int main() {
    int i = 0;
    f(i);
    cout << i << endl;
    return 0;
}
