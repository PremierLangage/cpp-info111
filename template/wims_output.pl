# Copyright 2018 Nicolas M. Thiéry ...

template=/template/wims.pl
name=deviner la sortie
typename=Deviner la sortie
type=sandbox

text==
Exécuter pas à pas le programme suivant et saisir ce que vous prévoyez
qu'il affiche.
==

solution_failure_message=Réponse incorrecte. Le programme a affiché: {out}
answer_failure_message=

build=@/template/builder.py
build+=
def build(exo):
    exo = build_generic(exo)
    exo['items'].append({'type':'answer', 'subtype': 'stdout'})
    return build_finalize(exo)
==
