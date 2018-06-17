template=/template/wims_output.pl
topic=if0
code==
/// BEGIN HIDDEN
#include <iostream>
using namespace std;

int main() {
    /// END HIDDEN
    int X = CI1;
    if ( X < 0 ) {
        cout << "negatif" << endl;
    } else {
        cout << "positif" << endl;
    }
    /// BEGIN HIDDEN
    return 0;
}
/// END HIDDEN
==
