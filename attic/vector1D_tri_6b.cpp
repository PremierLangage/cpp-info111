/// BEGIN HIDDEN
#include <iostream>
#include <vector>
using namespace std;
/// END HIDDEN

bool estTrie(vector<int> t) {
    for (int i = 0; i < t.size() - 1; i = i + 1) {
        if (t[i] < t[i + 1]) {
            return false;
        }
        return true;
    }
}


int main() {
    vector<int> tab = Vsort;
    if (estTrie(tab)) {
        cout << "il est trie";
    } else {
        cout << "il n'est pas trie";
    }
    return 0;
}
