#include <iostream>
#include <vector>
using namespace std;

int recherche(int x, vector<int> t) {
    for (int i = t.size() - 1; i >= 0; i = i - 1) {
        if (t[i] == x) {
            return i;
        }
    }
    return -1;
}


int main() {
    vector<int> tab = {3, 5, 4, 6};
    cout << recherche(5, tab) << endl;
    return 0;
}
