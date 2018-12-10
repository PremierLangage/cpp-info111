# Copyright 2018 Nicolas M. Thiéry ...

template=/template/wims.pl
name=deviner la sortie
typename=Deviner la sortie
type=sandbox

text==
Exécuter pas à pas le programme suivant et saisir ce que vous prévoyez
qu'il affiche.
==

feedback=false
failure_message=Réponse incorrecte:<pre>{answer}</pre>{%if feedback %}Le programme a affiché:<pre>{solution_out}</pre>{% endif %}

build==
from mybuilder import build_generic, build_finalize
def build(exo):
    exo = build_generic(exo)
    exo['items'].append({'type':'answer', 'subtype': 'stdout'})
    return build_finalize(exo)
==
