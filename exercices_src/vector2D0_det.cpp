#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector <int>> tab = {{2, 5}, {1, 4}};
    int d;

    d = tab[0][0] * tab[1][1] - tab[1][0] * tab[0][1];
    cout << d << endl;
}
