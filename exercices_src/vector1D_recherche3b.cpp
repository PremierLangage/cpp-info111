/// BEGIN HIDDEN
#include <iostream>
#include <vector>
using namespace std;
/// END HIDDEN

int recherche(int x, vector<int> t) {
    int indice = -1;
    for (int i = 0; i < t.size(); i = i + 1) {
        if (t[i] == x) {
            indice = i;
        }
    }
    return indice;
}


int main() {
    vector<int> tab = V242;
    cout << recherche(42, tab) << endl;
    return 0;
}
