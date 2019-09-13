/// BEGIN HIDDEN
#include <iostream>
#include "randomization.h"
using namespace std;

CONST NAMEstr = RANDOM_CHOICE("Bob", "Barbara", "Pierre", "Paul", "Jeanne", "Camille");

int main() {
/// END HIDDEN
    string NAME = NAMEstr;
    string r = NAME;  
/// BEGIN HIDDEN
    cout << r << endl;
    return 0;
}
/// Objectif Pédagogique : comprendre la difference entre valeur et nom d'une variable de type string.
/// END HIDDEN
