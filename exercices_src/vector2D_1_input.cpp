#include <iostream>
#include <vector>
using namespace std;

int main() {
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
        cout << tab[3][j] << endl;
}
