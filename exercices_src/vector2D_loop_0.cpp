/// BEGIN HIDDEN
#include <iostream>
#include <vector>
using namespace std;
CONST V22 = RANDOM_VECTOR(2, RANDOM_VECTOR, 3, RANDOM_INT, 0, 5);

int main() {
/// END HIDDEN
    vector<vector <int>> tab = V22;

    for (int i = 0; i < tab.size(); i++) {
        for (int j = 0; j < tab[i].size(); j++) {
            cout << tab[i][j] << endl;
        }
    }
/// BEGIN HIDDEN
}
/// END HIDDEN

