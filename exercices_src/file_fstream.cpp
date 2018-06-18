#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fichier("essai.txt");
    fichier << 10 << 24 << endl;
    fichier.close();

    ifstream fichier2("essai.txt");
    int i;
    fichier2 >> i;
    fichier2.close();

    cout << i << endl;
    return 0;
}
