/// BEGIN HIDDEN
#include <iostream>
#include <vector>
using namespace std;

int main() {
/// END HIDDEN
    vector<vector<int>> tab = {
        {42,  0,  0,  0,  0},
        { 0, 42,  0,  0,  0},
        { 0,  0, 42,  0,  0},
        { 0,  0,  0, 42,  0},
        { 0,  0,  0,  0, 42}
    };
    int j;
    cin >> j;
    if (0 <= j and j < 5)
        cout << tab[CI4][j] << endl;
/// BEGIN HIDDEN
}
/// END HIDDEN
