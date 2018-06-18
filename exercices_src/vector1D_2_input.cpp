#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> tab = {4, 10, 13, 7, 5, 6};
    int s = 0;
    cin >> tab[3];
    for (int i = 0; i < tab.size(); i++) {
        if (tab[i] % 2 == 0) {
            s = s + tab[i];
        }
    }
    cout << s << endl;
    return 0;
}
