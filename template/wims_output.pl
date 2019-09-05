# Copyright 2018 Nicolas M. Thiéry ...

template=/cpp-info111/template/wims.pl
name=deviner la sortie
typename=Deviner la sortie
type=sandbox

text==
Lire attentivement la partie de programme suivant et saisir ce que vous prévoyez qu'il affiche.
==

failure_message= Ce n'est pas la réponse attendue. #Réponse incorrecte:<pre>{answer}</pre>Le programme a affiché:<pre>{solution_out}</pre>

build==
from mybuilder import build_generic, build_finalize
def build(exo):
    exo = build_generic(exo)
    exo['items'].append({'type':'answer', 'subtype': 'stdout'})
    return build_finalize(exo)
==
