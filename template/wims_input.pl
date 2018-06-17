# Copyright 2018 Nicolas M. Thiéry ...

template=/template/wims.pl
name=deviner l'entrée
title=Deviner l'entrée
type=sandbox

text==
Quel nombre devrait saisir l'utilisateur pour que le programme C++ suivant affiche 42?
==

build=@/template/build.py
build+=
def build(exo):
    exo['title'] += ": "+exo['topic']
    code = exo['code']
    code = code_randomizer()(code)
    exo['code'] = code
    exo['items'] = split_code(code)
    exo['items'] = [{'type':'input', 'content': ''}] + exo['items']
    return exo
==

grader==
from graderCpp import grade, grader_expected_output
grade(grader_input)
==
