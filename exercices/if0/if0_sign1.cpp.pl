template=/template/wims_output.pl
topic=if0
code==
#include <iostream>
using namespace std;

int main() {
    int X = CI1;
    if ( X < 0 ) {
        cout << "negatif" << endl;
    } else {
        cout << "positif" << endl;
    }
    return 0;
}
==
