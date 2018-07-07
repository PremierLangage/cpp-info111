# Copyright 2018 Nicolas M. Thiéry ...

template=/template/wims.pl
name=deviner la sortie
title=Deviner la sortie
type=sandbox

text==
Exécuter pas à pas le programme suivant et saisir ce que vous prévoyez
qu'il affiche.
==

build+=
def build(exo):
    exo = build_generic(exo)
    exo['items'].append({'type':'answer', 'subtype': 'stdout', 'content': ''})
    return build_finalize(exo)
==
