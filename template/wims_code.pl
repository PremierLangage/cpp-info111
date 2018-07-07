# Copyright 2018 Nicolas M. Thiéry ...

template=/template/wims.pl
name=code
title=Compléter un programme
type=sandbox

text==
Compléter le programme suivant en suivant les instructions
==

build=@/template/builder.py
build+=
def build(exo):
    return build_finalize(build_generic(exo))
==
