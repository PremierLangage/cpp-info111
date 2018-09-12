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
solution_compile_error_message=Erreur interne: le programme solution ne compile pas:
solution_errors_message=Erreur interne: le programme solution affiche des erreurs:
answer_compile_error_message=Le programme ne compile pas:

title=Exercice

grader==
from graderCpp import grade, grader_generic
grade(grader_generic)
==
