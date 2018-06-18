#include <iostream>
#include <vector>

using namespace std;

int g(int n) {
    int i, r = 0;
    for (i = 1; i <= n; i++)
        r += i;
    return r;
}

void f(vector<int> &t, int a, int b) {
    int c;
    if (a < t.size() && b < t.size()) {
        c = g(t[a]);
        t[a] = g(t[b]);
        t[b] = c;
    }
}

int main() {
    vector<int> tab = {5, 7, 2, 3};

    f(tab, 1, 3);

    cout << tab[1] << endl;

    return 0;
}
