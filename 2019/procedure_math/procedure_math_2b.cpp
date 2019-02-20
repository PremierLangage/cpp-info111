#include <iostream>
#include <math.h>

using namespace std;


bool foo(int n) {
    if (n % 2 == 0) return false;
    for (int d = 3; d <= 5; d = d + 2)
        if (n % d == 0)
            return true;
    return false;
}

int main() {
    if (foo(15))
        cout << "Oui" << endl;
    else
        cout << "Non" << endl;

    return 0;
}
