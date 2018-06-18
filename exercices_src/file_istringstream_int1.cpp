#include <iostream>
#include <sstream>
using namespace std;

int main() {
    istringstream a("12 1 4 5");
    int I1, I2, I3;

    a >> I1 >> I2 >> I3;

    cout << I3 << endl;
    return 0;
}
