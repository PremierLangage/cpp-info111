# Copyright 2018 Nicolas M. Thiéry ...

author=MPI Info 111's team
# chargement des fichiers utiles
@ lib:/builder/build.py [builder.py]

@ /cpp-info111/template/plutils.py
@ /cpp-info111/template/graderCpp.py
@ /cpp-info111/template/randomization.h
@ /cpp-info111/template/builder.py [mybuilder.py]

form=@ /cpp-info111/template/form/editorform.html

title=Exercice

build ==
import wims

def build(exo):
    builder = wims.WimsOutput()
    return builder(exo)
==

