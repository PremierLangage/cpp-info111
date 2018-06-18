#include<iostream>

using namespace std;

void saisie(int a) {
    int b;
    cin >> b;
    a = b - a;
    cout << a;
}

int main() {
    int a = 10;
    saisie(a);
    return 0;
}
