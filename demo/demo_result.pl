template=demo.pl
title=Démo: deviner le résultat
text==
Dans ce type d'exercice, l'utilisateur doit exécuter pas à pas le
(fragment de) programme présenté et prédire le contenu de la variable
`r` à la fin.

Il s'agit en fait d'une simple variante de «deviner la sortie».
Le programme doit:

- définir une variable `r`;
- terminer en affichant la valeur de `r`,
  typiquement dans une section cachée

En soi n'importe quel autre nom de variable pourrait être utilisé; le
choix de `r` n'est que pour la cohérence avec le texte de description
de l'exercice.
==
@ /cpp-info111/exercices_src/tests/test_result.cpp
