#include <iostream>
#include <sstream>
using namespace std;

int main() {
    istringstream flux("12 14.5 13 4");
    int I1, I2, I3;
    string S1;

    flux >> I1 >> I2 >> S1 >> I3;

    cout << I2 << " " << S1 << " " << I3 << endl;
    return 0;
}
