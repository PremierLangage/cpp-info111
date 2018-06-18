#include <iostream>
#include <math.h>

using namespace std;


bool foo(int n, int j) {
    if (j ==  floor(sqrt(n) + 1))
        return true;
    else if (n % j == 0)
        return false;
    else
        return foo(n, j + 1);
}

int main() {

    if (foo(13, 2))
        cout << "Oui" << endl;
    else
        cout << "Non" << endl;


    return 0;
}
