# Copyright 2018 Nicolas M. Thiéry ...
#
# A generic where the student fills in the holes in a program that
# should produce no output. The typical use case is when the assesment
# are achieved exclusively via asserts.

template=/cpp-info111/template/wims_code.pl
name=code
typename=Compléter un programme avec tests
type=sandbox

text==
Compléter le programme suivant en suivant les instructions
==

failure_message=Erreurs:<pre>{answer_out}</pre>
