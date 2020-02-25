/// BEGIN HIDDEN
#include <iostream>
#include <vector>
using namespace std;
CONST V22 = RANDOM_VECTOR(2, RANDOM_VECTOR, 2, RANDOM_INT, 0, 5);

int main() {
/// END HIDDEN
    int s;
    vector<vector <int>> tab = V22;

    for (int i = 0; i < tab.size(); i++) {
        s = 0;
        for (int j = 0; j < tab[i].size(); j++) {
            s = s + tab[i][j];
        }
    }
    cout << s << endl;
/// BEGIN HIDDEN
}
/// END HIDDEN

