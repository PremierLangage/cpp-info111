template=/template/wims_input.pl
topic=io
code==
/// BEGIN HIDDEN
#include <iostream>
using namespace std;

int main() {
    /// END HIDDEN
    int x;

    cin >> x;
    cout << x + 3 << endl;
    /// BEGIN HIDDEN
    return 0;
}
/// END HIDDEN
==
