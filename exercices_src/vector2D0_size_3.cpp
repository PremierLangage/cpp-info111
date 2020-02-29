/// BEGIN HIDDEN
#include <iostream>
#include <vector>
using namespace std;

int main() {
/// END HIDDEN
    vector<vector <int>> tab = RANDOM_VECTOR(2, RANDOM_VECTOR, 3, RANDOM_INT, 0, 5);

    cout << tab[RANDOM_INT(0,1)].size() << endl;
/// BEGIN HIDDEN
}
/// END HIDDEN


