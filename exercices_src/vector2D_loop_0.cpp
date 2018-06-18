#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector <int>> tab = {{2, 5}, {1, 3}};

    for (int i = 0; i < tab.size(); i++) {
        for (int j = 0; j < tab[i].size(); j++) {
            cout << tab[i][j] << endl;
        }
    }
}
