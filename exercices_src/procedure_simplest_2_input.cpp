#include<iostream>

using namespace std;

void saisie(int &a) {
    int b;
    cin >> b;
    a = a + b;
}

int main() {
    int a = 10;
    saisie(a);
    cout << a;
    return 0;
}
