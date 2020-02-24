# Copyright 2018 Nicolas M. Thiéry ...

template=/cpp-info111/template/wims.pl
name=deviner l'entrée
typename=Deviner l'entrée
type=sandbox

text==
Quel nombre devrait saisir l'utilisateur pour que le programme C++ suivant affiche {{solution_out}}?
==

failure_message= Ce n'est pas la réponse attendue. Le programme a affiché: <pre>{answer_out}</pre>

build==
from mybuilder import build_generic, build_finalize
def build(exo):
    exo = build_generic(exo)
    exo['solution_out'] = 42
    exo['items'] = [{'type':'answer', 'subtype': 'stdin', 'content': ''}] + exo['items'] +\
                   [{'type':'solution', 'subtype': 'stdout', 'content': str(exo['solution_out'])}]
    return build_finalize(exo)
==


