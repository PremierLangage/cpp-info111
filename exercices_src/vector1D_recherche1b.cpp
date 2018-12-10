/// BEGIN HIDDEN
#include <iostream>
#include <vector>
using namespace std;
/// END HIDDEN

int recherche(int x, vector<int> t) {
    for (int i = 0; i < t.size(); i = i + 1) {
        if (t[i] == x) {
            return i;
        }
    }
    return -1;
}


int main() {
    vector<int> tab = V242;
    cout << recherche(42, tab) << endl;
    return 0;
}
