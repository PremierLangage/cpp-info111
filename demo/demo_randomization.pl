template=demo.pl
title=Démo: randomisation de code
text==
Cet exemple illustre les possibilités de randomisation du code par des
substitutions textuelles. Par défaut, les substitutions suivantes sont
appliquées:

- `X`, `Y`, `Z`:
  remplacés respectivement par une permutation aléatoire de `x`, `y`, `z`
- `I`, `J`, `K`, `N`:
  remplacés respectivement par une permutation aléatoire de `i`, `j`, `k`, `n`
- `PLUSOUMOINS`: remplacé par le signe `+` ou `-`

Il est possible de définir de nouvelles substitutions en début de
fichier, typiquement dans une section cachée, comme dans l'exemple
suivant:

    /// BEGIN HIDDEN
    #include "randomization.h"
    CONST I = RANDOM_INT(2, 10);
    CONST S = RANDOM_CHOICE("alice", "bob", "charlie");
    CONST P = RANDOM_CHOICE(7, 13, 17, 21);
    CONST V = RANDOM_VECTOR(5, RANDOM_INT, 2, 10);
    /// END HIDDEN

Au moment du chargement de l'exercice par PLaTon, chaque occurence du
mot `I` après la ligne `CONST I=...` sera substitué par le nombre
aléatoire entre 2 et 10 choisi. Cela y compris dans les commentaires
et chaînes de caractères. Les substitutions redéfinies comme ci-dessus
prennent le pas sur les substitutions prédéfinies.

L'entête `randomisation.h` rend le code directement exécutable,
indépendamment de PLaTon. La randomisation est simplifiée.

Voici les fonctions de randomisation disponibles:

- `RANDOM_INT(min, max)`: un nombre entier aléatoire entre min et max inclus
- `RANDOM_CHOICE("alice", "bob", "charlie")`: une valeur parmi un

- `RANDOM_VECTOR(size, constructor, <arguments>)`: un vecteur de
  longueur `size`, et dont chaque valeur est construite avec
  `constructor(arguments)`.

Ces fonctions peuvent être composées ou utiliser des «variables»
définies préalablement. Ainsi,

    CONST MAX = RANDOM_INT(2,3)
    CONST V = RANDOM_VECTOR(RANDOM_INT(10,20), RANDOM_INT, 0, MAX)

Choisira une valeur aléatoire entre 2 et 3 pour `MAX`, puis un vecteur
aléatoire de longeur entre 10 et 20 et dont les valeurs sont entre 0
et MAX.

==
@ /cpp-info111/exercices_src/tests/test_randomization.cpp
