topicname=Démo PLaTon/cpp-info111, mode démo
title=Mode démo
template=/cpp-info111/template/wims.pl
mode=demo
settings.allow_reroll = true
settings.reroll_threshold = -1
@ /cpp-info111/exercices_src/tests/test_code.cpp
@ /cpp-info111/exercices_src/tests/test_input.cpp
@ /cpp-info111/exercices_src/tests/test_multisolution_code.cpp
@ /cpp-info111/exercices_src/tests/test_output.cpp
@ /cpp-info111/exercices_src/tests/test_randomization.cpp
@ /cpp-info111/exercices_src/tests/test_result.cpp
@ /cpp-info111/exercices_src/tests/test_return.cpp
@ /cpp-info111/exercices_src/tests/test_silentcode.cpp

form=@ /cpp-info111/template/form/editorform.html
form+=
{{ hints|component}}
==

hints % { "cid": "hints", "selector": "c-hint" }
hints.shouldConfirm = false
hints.label = Voir les sources
hints.items %=
[
    { "content": "Source: <pre> {{ mode }} </pre>" }
]
==

