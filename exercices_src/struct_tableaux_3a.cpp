#include <iostream>
#include <vector>


using namespace std;

struct Mesure {
    string id_mesure;
    vector<double> valeurs;
};


int main() {
    Mesure m1, m2, m3, moyennes;

    m1.id_mesure = "essai_1";
    m1.valeurs = {4.3, 5.4, 2.5, 6.4};
    m2.id_mesure = "essai_2";
    m2.valeurs = {3.9, 5.0, 2.3, 6.7};
    m3.id_mesure = "essai_3";
    m3.valeurs = {4.1, 5.2, 2.7, 7.0};

    moyennes.id_mesure = "valeurs_moyennes";
    moyennes.valeurs = vector<double>(m1.valeurs.size());
    for (int i = 0; i < moyennes.valeurs.size(); i++)
        moyennes.valeurs[i] = (m1.valeurs[i] + m2.valeurs[i] + m3.valeurs[i]) / 3.;

    cout << moyennes.valeurs[3] << endl;

    return 0;
}
