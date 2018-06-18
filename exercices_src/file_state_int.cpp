#include <iostream>
#include <sstream>
using namespace std;

int main() {
    istringstream flux("CI1.01 CI2.02");
    int I1, I2;
    flux >> I1;
    if ( flux ) {
        cout << "A" << endl;
    } else {
        cout << "B" << endl;
    }
    flux >> I2;
    if ( flux ) {
        cout << "A" << endl;
    } else {
        cout << "B" << endl;
    }
    return 0;
}
