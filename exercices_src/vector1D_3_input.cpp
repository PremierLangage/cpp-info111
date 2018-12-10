/// BEGIN HIDDEN
#include <iostream>
#include <vector>
using namespace std;
/// END HIDDEN

int mystere(vector<int> tab, int v) {
    int c = 0;
    for (int i = 0; i < tab.size(); i++) {
        if (tab[i] == v) {
            c = c + 1;
        }
    }
    return c;
}

int main() {
    vector<int> tab = V3v;
    int s;
    cin >> s;
    cout << s + mystere(tab, 42) << endl;
    return 0;
}
