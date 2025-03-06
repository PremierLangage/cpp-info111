/// BEGIN HIDDEN
/// TODO: randomisation ???
#include <iostream>
#include <vector>
using namespace std;
/// END HIDDEN

int mystere(vector<vector<int>> tab, int i) {
    int s = 0;
    for (int j = 0; j < tab[i].size(); j++) {
        s = s + tab[i][j];
    }
    return s;
}

int main() {
    vector<vector<int>> tab = {
        {10, 10, 20, 2},
        {10, 20, 10, 1},
        {20, 10, 10, 3},
        { 1,  3,  2, 0}
    };
    int i;
    cin >> i;
    if (0 <= i and i < 4)
        cout << mystere(tab, i) << endl;
}
