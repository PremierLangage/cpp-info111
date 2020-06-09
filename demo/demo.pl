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
hints.label = **Stucked?** Ask a hint.
hints.confirmMessage ==
The usage of a hint may affect your final score!
==

hints.shouldConfirm % true
hints.confirmTitle = Are you sure you want a hint ?
hints.confirmOkTitle = Yes
hints.confirmNoTitle = No
hints.items %=
[
    { "content": "**Hint 1**" },
    { "content": "**Hint 2**"  },
    { "content": "**Hint 3**", "css": "warning-state"  }
]
==

