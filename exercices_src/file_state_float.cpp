#include <iostream>
#include <sstream>
using namespace std;

int main() {
    istringstream flux("bonjour");
    float I1;
    flux >> I1;
    if ( flux ) {
        cout << "A" << endl;
    } else {
        cout << "B" << endl;
    }
    return 0;
}
