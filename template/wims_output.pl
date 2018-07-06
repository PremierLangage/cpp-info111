# Copyright 2018 Nicolas M. Thiéry ...

template=/template/wims.pl
name=deviner la sortie
title=Deviner la sortie
type=sandbox

text==
Exécuter pas à pas le programme suivant et saisir ce que vous prévoyez
qu'il affiche.
==

build=@/template/build.py
build+=
def build(exo):
    random.seed(exo['seed'])
    exo['title'] += ": "+exo['topic']
    code = exo['code']
    code = code_randomizer()(code)
    exo['code'] = code
    exo['items'] = split_code(code)
    exo['items'].append({'type':'input', 'content': ''})
    return exo
==

grader==
from graderCpp import grade, grader_expected_output
grade(grader_expected_output)
==
