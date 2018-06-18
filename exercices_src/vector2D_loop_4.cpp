#include <iostream>
#include <vector>
using namespace std;

int main() {
    int s;
    vector<vector <int>> tab = {{2, 5}, {1, 3}};

    for (int i = 0; i < tab.size(); i++) {
        s = 0;
        for (int j = 0; j < tab[i].size(); j++) {
            s = s + tab[i][j];
        }
    }
    cout << s << endl;
}
