#include <iostream>
using namespace std;

int main() {
    int x = 2;
    for ( int i = 1; i <= 3 ; i = i + 1 ) {
        x = x + i;
    }
    cout << x << endl;
    return 0;
}
