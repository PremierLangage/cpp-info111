# Copyright 2019 Nicolas M. Thiéry ...

# In an exercise of this type, the user is given a function of one
# argument, an input value, and must guess the return value.
#
# Code requirements: the code should:
# - define a function f of a single input and hide everything else
# - define a randomized constant INPUT
# - print the result of f(INPUT)
#
# Code example: tests/test_return.cpp

template=/cpp-info111/template/wims_output.pl
name=deviner le résultat
typename=Deviner le résultat
type=sandbox

failure_message=Ce n'est pas la réponse attendue.# La fonction renvoie:<pre>{solution_out}</pre>

text==
Exécuter pas à pas la fonction suivante. Que renvoie <tt>f({{consts['INPUT']}})</tt>?
==


