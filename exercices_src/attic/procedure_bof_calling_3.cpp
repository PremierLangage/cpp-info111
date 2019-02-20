#include <iostream>
#include <vector>

using namespace std;

int g(int n) {
    return (n + 1) * (n - 1);
}

void f(vector<int> t, int a, int b, int &c) {
    if (t[a] < t[b]) c = g(t[b] - t[a]);
    else             c = g(t[a] - t[b]);
}

int main() {
    vector<int> tab = {2, 4, 5, 8};
    int r = -1;
    int x = 2;
    int y = 3;

    f(tab, x, y, r);

    cout << r << endl;

    return 0;
}
