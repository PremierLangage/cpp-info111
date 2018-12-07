/// BEGIN HIDDEN
#include <iostream>
#include <vector>
using namespace std;

int main() {
/// END HIDDEN
    vector<int> tab = Vlt10;
    int s = 0;
    cin >> tab[CI4];
    for (int i = 0; i < tab.size(); i++) {
        if (tab[i] % 2 == 0) {
            s = s + tab[i];
        }
    }
    cout << s << endl;
    return 0;
}
