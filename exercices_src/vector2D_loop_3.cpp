/// BEGIN HIDDEN
#include <iostream>
#include <vector>
using namespace std;

int main() {
/// END HIDDEN
    vector<vector <int>> tab = V22;
    int s = 0;

    for (int i = 0; i < tab.size(); i++) {
        for (int j = 0; j < tab[i].size(); j++) {
            s = s + tab[i][j];
        }
    }
    cout << s << endl;
/// BEGIN HIDDEN
}
/// END HIDDEN
