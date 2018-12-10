/// BEGIN HIDDEN
#include <iostream>
#include <vector>
using namespace std;
/// END HIDDEN

int recherche(int x, vector<int> t) {
    int indice = -1;
    for (int i = t.size() - 1; i >= 0; i = i - 1) {
        if (t[i] == x) {
            indice = i;
        } else {
            indice = -1;
        }
    }
    return indice;
}


int main() {
    vector<int> tab = V42;
    cout << recherche(42, tab) << endl;
    return 0;
}
