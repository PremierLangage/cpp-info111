# Copyright 2016 Nicolas M. Thiéry ...
#
# ...

author=MPI Info 111's team
name=deviner la sortie
title=Deviner la sortie: if basiques
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

grader==
import io, plutils, json
exo = plutils.getpldic()
try:
    user_solution = io.open("student.py").read()
except FileNotFoundError:
    user_solution = "" # Temporary work around: student.py does not get created if the input is empty
response = grader_expected_output(exo,user_solution)
print(json.dumps(response))
==




