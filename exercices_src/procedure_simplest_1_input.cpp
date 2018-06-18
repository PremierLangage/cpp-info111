#include<iostream>

using namespace std;

void saisie(int a) {
    int b;
    cin >> b;
    a = a + b;
    cout << a;
}

int main() {
    int a = 10;
    saisie(a);
    return 0;
}
