# Copyright 2018 Nicolas M. Thiéry ...

author=MPI Info 111's team
# chargement des fichiers utiles
@/template/plutils.py
@/template/graderCpp.py
@/template/randomization.h

form=@/template/form/editorform.html
@ /builder/build.py [builder.py]
build=@/template/builder.py

solution_failure_message=Affichage souhaité:
answer_failure_message=Le programme a affiché:
solution_compile_error_message=Erreur interne: le programme solution ne compile pas:
solution_errors_message=Erreur interne: le programme solution affiche des erreurs:
answer_compile_error_message=Le programme ne compile pas:

title=Exercice

grader==
import sys
from graderCpp import grader_generic

if __name__ == "__main__":
    import json
    with open(sys.argv[1]) as f:
        context = json.load(f)
    with open(sys.argv[2]) as f:
        response = json.load(f)

    context["response"] = response

    result = grader_generic(context)

    if result['success']:
        print(100)
    else:
        print(50)
    with open(sys.argv[4], 'w+') as f:
        print(result['feedback'], file=f)

    sys.exit(0)
==
