#include <iostream>
#include <vector>
using namespace std;

int mystere(vector<int> tab, int v) {
    int c = 0;
    for (int i = 0; i < tab.size(); i++) {
        if (tab[i] == v) {
            c = c + 1;
        }
    }
    return c;
}

int main() {
    vector<int> tab = {10, 2, 5, 2, 10, 5, 5, 2};
    int s;
    cin >> s;
    cout << s + mystere(tab, 10) << endl;
    return 0;
}
