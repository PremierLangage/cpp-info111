# Copyright 2018 Nicolas M. Thiéry ...

author=MPI Info 111's team
# chargement des fichiers utiles
@/template/plutils.py
@/template/graderCpp.py
@/template/randomization.h

form=@/template/form/editorform.html
build=@/template/builder.py

solution_failure_message=Affichage souhaité:
answer_failure_message=Le programme a affiché:

title=Exercice

grader==
from graderCpp import grade, grader_generic
grade(grader_generic)
==
