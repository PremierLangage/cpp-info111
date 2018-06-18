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

    e1.name = "Pauline";
    e1.note_TP = 14;
    e1.note_Partiel = 13;

    e2.name = "Richard";
    e2.note_TP = 18;
    e2.note_Partiel = 15;

    e3.name = "Albert";
    e3.note_TP = 10;
    e3.note_Partiel = 7;

    e4.name = "Pierre";
    e4.note_TP = 17;
    e4.note_Partiel = 5;

    e5.name = "Aline";
    e5.note_TP = 19;
    e5.note_Partiel = 14;

    var.note_Globale = 20.;

    l1.name = "L1";
    l1.tableau_Eleves = {e1, e2, e3, e4, e5};

    for (int i = 0; i < l1.tableau_Eleves.size(); i++) {
        l1.tableau_Eleves[i].note_Globale = (l1.tableau_Eleves[i].note_TP +
                                             l1.tableau_Eleves[i].note_Partiel) / 2.0;
        if (l1.tableau_Eleves[i].note_Globale <= var.note_Globale) {
            var = l1.tableau_Eleves[i];
        }
    }

    cout << var.name << endl;
    return 0;
}
