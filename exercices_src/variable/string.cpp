/// BEGIN HIDDEN
#include <iostream>
#include "randomization.h"
using namespace std;

string a;
string b;
string c;

CONST NAME1 = RANDOM_CHOICE("a", "b", "c");
CONST NAME2 = RANDOM_CHOICE(a, b, c);
CONST NAME  = RANDOM_CHOICE(NAME1, NAME2);

int main() {
/// END HIDDEN
  string NAME1 = NAME2;
  string r = NAME;
  
/// BEGIN HIDDEN
    cout << r << endl;
    return 0;
}
/// END HIDDEN
