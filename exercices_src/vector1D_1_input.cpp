#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> tab = {4, 5, 42, 85, 45};
    int i;

    cin >> i;
    cout << tab[i - 2] << endl;

    return 0;
}
