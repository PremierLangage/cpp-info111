#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream flux("xkasflakjsjlkdfjasadffk.zut");
    if ( flux ) {
        cout << "A" << endl;
    } else {
        cout << "B" << endl;
    }
    return 0;
}
