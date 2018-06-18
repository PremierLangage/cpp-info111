#include <iostream>
#include <vector>
using namespace std;

void  calcul(vector<int> t, int v, int &i, bool &b) {
    i = -1;
    b = false;
    for ( int j = 0; j < t.size(); j++) {
        if (t[j]  == v) {
            i = j;
            b = true;
        }
    }
}


int main() {
    bool  toto;
    vector<int> tab = {4, 10, 13, 7, 5, 6};
    int s = 0;
    calcul(tab, 7, s, toto);
    if (not toto) cout << "calcul" << endl;
    else  cout << s << endl;
}
