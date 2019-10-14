#include <iostream>
using namespace std;

int main() {
    int n = 27;
    int i = 0;
    while (n > 6) {
        n = n - 6;
        i = i + 1;
    }
    cout << i << endl;
}
