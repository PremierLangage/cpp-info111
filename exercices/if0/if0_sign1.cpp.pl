# Copyright 2016 Nicolas M. Thiéry ...
#
# ...

author=Nicolas Thiéry
name=deviner la sortie
title=deviner la sortie: if basiques
tag=if0

type=sandbox

# chargement des fichiers utiles
@/template/plutils.py
@/template/grader.py

form=@/template/form/editorform.html

text==
Exécuter pas à pas le programme suivant et saisir ce que vous prévoyez
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
print("foo")
import io, plutils, grader
exo = plutils.getpldic()
user_solution = io.open("student.py")
response = grader.grader_expected_output(exo,user_solution)
print(json.dumps(response))
==


