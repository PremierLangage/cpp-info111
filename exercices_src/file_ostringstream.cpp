/// BEGIN HIDDEN
#include <iostream>
#include <sstream>
#include "randomization.h"
using namespace std;

CONST C = RANDOM_INT(-2, 2);

int main() {
/// END HIDDEN
    ostringstream flux;

    flux << "8+C=" << 8 + C;
    string s = flux.str();

    cout << s.length() << endl;
/// BEGIN HIDDEN
    return 0;
}
/// END HIDDEN
