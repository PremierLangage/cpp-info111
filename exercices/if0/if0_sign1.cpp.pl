@/template/wims_output.pl
title=Deviner la sortie: if basiques
code==
#include <iostream>
using namespace std;

int main() {
    int x = -2;
    if ( x < 0 ) {
        cout << "negatif" << endl;
    } else {
        cout << "positif" << endl;
    }
    return 0;
}
==
