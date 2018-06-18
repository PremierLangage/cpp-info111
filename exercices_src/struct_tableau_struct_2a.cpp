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

    e1.name = "Valentin";
    e1.note_TP = 15;
    e1.note_Partiel = 7;

    e2.name = "Caroline";
    e2.note_TP = 13;
    e2.note_Partiel = 16;

    e3.name = "Gabriel";
    e3.note_TP = 8;
    e3.note_Partiel = 11;

    e4.name = "Alexandra";
    e4.note_TP = 17;
    e4.note_Partiel = 12;

    e5.name = "Maria";
    e5.note_TP = 14;
    e5.note_Partiel = 7;

    var.note_Globale = 0.;

    l1.name = "L1";
    l1.tableau_Eleves = {e1, e2, e3, e4, e5};

    for (int i = 0; i < l1.tableau_Eleves.size(); i++) {
        l1.tableau_Eleves[i].note_Globale = (l1.tableau_Eleves[i].note_TP +
                                             l1.tableau_Eleves[i].note_Partiel) / 2.0;
        if (l1.tableau_Eleves[i].note_Globale >= var.note_Globale) {
            var = l1.tableau_Eleves[i];
        }
    }

    cout << var.name << endl;
    return 0;
}
