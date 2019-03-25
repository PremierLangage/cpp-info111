/// BEGIN HIDDEN
#include<iostream>
#include<string>
using namespace std;
#include "randomization.h"
/// END HIDDEN
/** Dessine un triangle
 * @param N
 *  @return une chaîne de caractère avec N lignes, avec
 *          une étoile sur la première ligne,
 *          deux étoiles sur la seconde,
 *          trois étoiles sur la troisième, ...
**/
string triangle(int N) {
    string s = "";
    /// BEGIN SOLUTION
    for (int I=1; I<=N; I++) {
        for (int J=1; J<= I; J++) {
            s = s + "*";
        }
        s = s + "\n";
    }
    /// END SOLUTION
    /// BEGIN INITSOLUTION
    /// for(...){
    ///     for(...){
    ///         s = s + "*";
    ///     }
    ///     s = s + "\n";
    /// }
    /// END INITSOLUTION
    return s;
}

/// BEGIN HIDDEN
int main() {
     int N = CI1+5;
     cout << "Résultat de triangle(" << N << "):" << endl;
     cout << triangle(N);
}
/// END HIDDEN
