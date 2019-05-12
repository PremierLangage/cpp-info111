/// BEGIN HIDDEN
#include <iostream>
#include <vector>
#include "randomization.h"

using namespace std;

CONST NAME1 = RANDOM_CHOICE("Alexandre", "Yasmine", "Albert", "Alice", "Antoine", "Anna");
CONST NAME2 = RANDOM_CHOICE("Bob", "Barbara", "Pierre", "Paul", "Jeanne", "Camille");
CONST NAME3 = RANDOM_CHOICE("Aline", "Samir", "Mounia", "Valentin", "Caroline", "Gabriel");
CONST NAME4 = RANDOM_CHOICE("Julien", "Sophie", "Hugo", "Julie", "Mathilde", "Guillaume");
CONST NAME5 = RANDOM_CHOICE("Pauline", "Simon", "Richard", "Samuel", "Naouele", "Tilia");

CONST NOTETP1 = RANDOM_INT(4, 18);
CONST NOTEPAR1 = RANDOM_INT(4, 18);
CONST NOTETP2 = RANDOM_INT(4, 18);
CONST NOTEPAR2 = RANDOM_INT(4, 18);
CONST NOTETP3 = RANDOM_INT(4, 18);
CONST NOTEPAR3 = RANDOM_INT(4, 18);
CONST NOTETP4 = RANDOM_INT(4, 18);
CONST NOTEPAR4 = RANDOM_INT(4, 18);
CONST NOTETP5 = RANDOM_INT(4, 18);
CONST NOTEPAR5 = RANDOM_INT(4, 18);
/// END HIDDEN

struct Eleve {
    string name;
    double note_TP;
    double note_Partiel;
    double note_Globale;
};

struct Classe {
    string name;
    Eleve tableau_Eleves[5];
};



int main() {
    Eleve e1, e2, e3, e4, e5, var;
    Classe l1;
    
    l1.name = "L1";

    e1.name = NAME1;
    e1.note_TP = NOTETP1;
    e1.note_Partiel = NOTEPAR1;
    l1.tableau_Eleves[0] = e1;

    e2.name = NAME2;
    e2.note_TP = NOTETP2;
    e2.note_Partiel = NOTEPAR2;
    l1.tableau_Eleves[1] = e2;
    
    e3.name = NAME3;
    e3.note_TP = NOTETP3;
    e3.note_Partiel = NOTEPAR3;
    l1.tableau_Eleves[2] = e3;
    
    e4.name = NAME4;
    e4.note_TP = NOTETP4;
    e4.note_Partiel = NOTEPAR4;
    l1.tableau_Eleves[3] = e4;
    
    e5.name = NAME5;
    e5.note_TP = NOTETP5;
    e5.note_Partiel = NOTEPAR5;
    l1.tableau_Eleves[4] = e5;
    
    var.note_Globale = 0.;

    for (int i = 0; i < 5; i++) {
        l1.tableau_Eleves[i].note_Globale = (l1.tableau_Eleves[i].note_TP +
                                             l1.tableau_Eleves[i].note_Partiel) / 2.0;
        if (l1.tableau_Eleves[i].note_Globale > var.note_Globale) {
            var = l1.tableau_Eleves[i];
        }
    }

    cout << var.name << endl;
    return 0;
}
