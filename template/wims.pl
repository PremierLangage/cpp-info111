# Copyright 2018 Nicolas M. Thiéry ...

author=MPI Info 111's team
# chargement des fichiers utiles
@ lib:/builder/build.py [builder.py]

@ /cpp-info111/template/plutils.py
@ /cpp-info111/template/graderCpp.py
@ /cpp-info111/template/randomization.h
@ /cpp-info111/template/wims.py
@ /cpp-info111/template/wims_builder.py

form=@ /cpp-info111/template/form/editorform.html

title=Exercice

build ==
import wims

def build(exo):
    builder = wims.WimsOutput()
    return builder(exo)
==
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

    feedback = result['feedback']
    if result['success']:
        feedback = '<div id="success" class="alert alert-success feedback">'+feedback+'</div>'
        print(100)
    else:
        feedback = '<div id="success" class="alert alert-danger feedback">'+feedback+'</div>'
        print(0)

    with open(sys.argv[4], 'w+') as f:
        print(feedback, file=f)

    sys.exit(0)
==


