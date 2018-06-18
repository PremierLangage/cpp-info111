#include <iostream>
#include <sstream>
using namespace std;

int main() {
    istringstream a("a   bc     de f");
    string S1, S2, S3;

    a >> S1 >> S2 >> S3;

    cout << S3 << endl;
    return 0;
}
