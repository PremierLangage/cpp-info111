#include <iostream>
#include <sstream>
using namespace std;

int main() {
    ostringstream flux;

    flux << "8+CI1=" << 8 + CI1;
    string s = flux.str();

    cout << s.length() << endl;
    return 0;
}
