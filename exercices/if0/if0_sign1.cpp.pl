# Copyright 2016 Nicolas M. Thiéry ...
#
# ...

author=Nicolas Borie
name=deviner la sortie
title=deviner la sortie: if basics
tag=if0

type=sandbox

# chargement des fichiers utiles
@/template/plutils.py
@/template/grader.py
#@/template/feedbackC.py
#@/template/__init__.py
#@/template/templateC.html
#@/template/templateConglet.html

# interface exercice standard plbank
form=@plbank:/python/form/editorform.html

text==
Exécuter pas à pas le programme suivant et saisir ce que vous prevoyez
qu'il affiche.
==

code==
#include <iostream>
using namespace std;

int main() {
    int x = -2;
    if ( x < 0 ) {
        cout << "negatif" << endl;
    } else {
        cout << "positif" << endl;
    }
    return 0;
}
==


grader==
import io, plutils, grader
exo = plutils getpldict()
user_solution = io.open("student.py")
response = grader.grader_expected_output(exo,user_solution)
print(json.dumps(response))
==

form=@/template/form/editorform.html
