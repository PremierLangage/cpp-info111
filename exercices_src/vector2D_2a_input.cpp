#include <iostream>
#include <vector>
using namespace std;

int mystere(vector<vector<int>> tab, int j) {
    int s = 0;
    for (int i = 0; i < tab.size(); i++) {
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
    int j;
    cin >> j;
    if (0 <= j and j < 4)
        cout << mystere(tab, j) << endl;
}
