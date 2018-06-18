#include <iostream>
#include <vector>
using namespace std;

bool estTrie(vector<int> t) {
    bool res = true;
    for (int i = 0; i < t.size() - 1; i = i + 1) {
        if (t[i] < t[i + 1]) {
            res = false;
        } else {
            res = true;
        }
    }
    return res;
}


int main() {
    vector<int> tab = {5, 2, 8, 3};
    if (estTrie(tab)) {
        cout << "il est trie";
    } else {
        cout << "il n'est pas trie";
    }
    return 0;
}
