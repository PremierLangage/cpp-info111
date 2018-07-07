# Copyright 2018 Nicolas M. Thiéry ...

template=/template/wims.pl
name=deviner l'entrée
title=Deviner l'entrée
type=sandbox

text==
Quel nombre devrait saisir l'utilisateur pour que le programme C++ suivant affiche 42?
==

solution_failure_message=None
answer_failure_message="Le programme a affiché"

build=@/template/builder.py
build+=
def build(exo):
    exo = build_generic(exo)
    exo['items'] = [{'type':'answer', 'subtype': 'stdin', 'content': ''}] + exo['items'] + [{'type':'solution', 'subtype': 'stdout', 'content': '42'}]
    return build_finalize(exo)
==
