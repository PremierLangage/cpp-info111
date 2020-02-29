/// BEGIN HIDDEN
#include <iostream>
#include <vector>
using namespace std;

CONST V23 = RANDOM_VECTOR(2, RANDOM_VECTOR, 3, RANDOM_INT, 0, 5);

int main() {
/// END HIDDEN
    vector<vector <int>> tab = V23;

    cout << tab[RANDOM_INT(0,1)].size() << endl;
/// BEGIN HIDDEN
}
/// END HIDDEN



