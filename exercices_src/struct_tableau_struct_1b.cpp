#include <iostream>
#include <vector>

using namespace std;

struct Eleve {
    string name;
    double note_TP;
    double note_Partiel;
    double note_Globale;
};

struct Classe {
    string name;
    vector<Eleve> tableau_Eleves;
};



int main() {
    Eleve e1, e2, e3, e4, e5, var;
    Classe l1;

    e1.name = "Julien";
    e1.note_TP = 13;
    e1.note_Partiel = 3;

    e2.name = "Jeanne";
    e2.note_TP = 15;
    e2.note_Partiel = 13;

    e3.name = "Romain";
    e3.note_TP = 16;
    e3.note_Partiel = 12;

    e4.name = "Elise";
    e4.note_TP = 8;
    e4.note_Partiel = 13;

    e5.name = "Thomas";
    e5.note_TP = 12;
    e5.note_Partiel = 15;

    var.note_Globale = 0.;

    l1.name = "L1";
    l1.tableau_Eleves = {e1, e2, e3, e4, e5};

    for (int i = 0; i < l1.tableau_Eleves.size(); i++) {
        l1.tableau_Eleves[i].note_Globale = (l1.tableau_Eleves[i].note_TP +
                                             l1.tableau_Eleves[i].note_Partiel) / 2.0;
        if (l1.tableau_Eleves[i].note_Globale > var.note_Globale) {
            var = l1.tableau_Eleves[i];
        }
    }

    cout << var.name << endl;
    return 0;
}
