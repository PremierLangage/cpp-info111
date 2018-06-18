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
    m1.valeurs = {4.3, 8.4, 3.8, 7.4};
    m2.id_mesure = "essai_2";
    m2.valeurs = {3.9, 8.2, 3.9, 7.3};
    m3.id_mesure = "essai_3";
    m3.valeurs = {4.1, 8.3, 3.7, 7.5};

    moyennes.id_mesure = "valeurs_moyennes";
    moyennes.valeurs = vector<double>(m1.valeurs.size());
    for (int i = 0; i < moyennes.valeurs.size(); i++)
        moyennes.valeurs[i] = (m1.valeurs[i] + m2.valeurs[i] + m3.valeurs[i]) / 3.;

    cout << moyennes.valeurs[2] << endl;

    return 0;
}
