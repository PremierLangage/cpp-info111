# cpp-info111

`cpp-info111` est un moteur d'exercices, et une collection d'exercices
utilisant ce moteur pour la plateforme PLaTon.

[Démonstration en ligne](https://ecampus.paris-saclay.fr/mod/lti/view.php?id=174435)
(accès limité pour l'instant)

## Les types d'exercices

Ce moteur permet de réaliser plusieurs types d'exercices (`output`,
`input`, ...). Voir la démonstration en ligne pour des exemples et les
spécifications de chacun de ces types. Les sources de ces exemples
sont dans le dossier [exercices_src/tests/](exercices_src/tests/).

Le type d'un exercice est indiqué par sa terminaison. Ainsi
`foo_bar_input.cpp` est de type `input`. Si rien n'est précisé,
l'exercice sera par défaut de type `output`.

Pour ajouter des consignes autres que celles indiquées par défaut pour
un type d'exercice, il faut les mettre en commentaire *visible pour
les étudiants*.

## Annotations du code

Le code peut être annoté au moyen de balises qui délimitent des
sections:

-   `/// BEGIN|END HIDDEN`

	Tout ce qui est entre la balises de début et de fin est caché.
    Cas d'usages typiques:

    - cacher les parties non pertinentes
    - cacher la configuration de l'exercice (randomisation, ...)
    - mettre des commentaires à l'attention des enseignants et
      notamment l'objectif pédagogique de l'exercice.

-   `/// BEGIN|END SOLUTION`

	Ces balises sont utilisées uniquement pour les exercices à trou
	(type `code`). Le contributeur écrit alors une solution qui répond
	à la question posée. Le résultat affiché avec cette solution sera
	alors comparé à l'affichage du code de l'étudiant.

	Voir le [fichier exemple](`exercices_src/tests/test_code.cpp`).

-   `/// BEGIN|END INITSOLUTION`

	Ces balises sont utilisées uniquement pour les exercices à trou
	(type `code`). Elles permettent d'initialiser la zone d'édition.
    Cas d'usages typiques:

    - Réduire la frappe des étudiants pour se concentrer sur le cœur
      de l'objectif pédagogique
    - Donner une solution fausse à corriger

    La balise `/// BEGIN INITSOLUTION` doit se trouver immédiatement
	après une balise `/// END SOLUTION` et tout le contenu de cette
	initisation de solution doit être commenté par des `///` (voir le
	[fichier exemple](`exercices_src/tests/test_code.cpp`)).

## Randomisation

Voir la démonstration en ligne ([sources](demo/demo_randomization.pl)).

Vous pouvez regarder l'effet de la randomisation sur un programme de
votre choix avec:

    cd exercices_src/
    ../tools/randomize_code nom_du_fichier.cpp

(pour le moment, vous devez être dans le répertoire exercices_src pour
lancer `randomize_code`).

## Exercices

Pour charger un exercice dans PLaTon à partir d'un ou plusieurs
programmes, il faut écrire un fichier `.pl` de la forme suivante:

    template=/cpp-info111/template/wims.pl
    title=...
    @ fichier source1
    @ fichier source2
    @ fichier source3

Le répertoire `exercices` contient pour chaque programe dans
`exercice_src` un fichier `.pl` généré automatiquement de la forme:

    template=/cpp-info111/template/wims.pl
    template=/cpp-info111/exercices_src/foo/metadata.pl
    @ /cpp-info111/exercices_src/foo/bar.cpp

le fichier `foo/metadata.pl` spécifiant un titre commun à tous les
exercices de dossier `foo/`.

## Feuilles d'exercices

TODO

## Organisation du dépôt

- `template`: le moteur d'exercice
- `exercices_src`: le code source des exercices, classés par thème.
   Chaque thème est défini par un dossier et un fichier `metadata.pl`
   dans ce dossier.
- `exercices`: les exercices et feuilles d'exercices PLaTon associés

## Contribution

Les chargés de TP doivent dans un sous dossier de `exercice_src` créer des exercices qui correspondent au thème et les push sur le git.
Une liste de thèmes se trouve dans le dossier principal (fichier Themes.txt), le but est d'avoir un nombre important d'exercices correspondant à toutes les notions étudiées en cours par les étudiants et de les regrouper au maximum par thème. Dans le sous dossier `exercice_src` il y a déjà un certain nombre de sous dossiers correspondant à des thèmes. Certains de ces dossiers ne contiennent qu'un seul exercice ou deux, il faudrait donc en créer d'avantage. Ensuite pour créer un exercice, l'idée est de s'appuyer sur les erreurs fréquentes que l'on peut voir dans le travail des étudiants pour faire des exercices simples qui visent un but pédagogique précis.
Enfin pour créer des exercices il faut suivre les autres instructions disponible ci-dessous et s'inspirer d'exemples. L'un des but principaux est de faire des exercices où les étudiants doivent coder des fonctions. Par exemple comme les fichiers : `exercices_src/struct_tableaux/struct_tableaux_ajouteBoite_code.cpp` et `exercices_src/struct_simple/struct_P3D_eq_code.cpp`.

Lors de la conception d'un exercice, il est indispensable de tester
que le code compile avec g++ avant de le push sur le git pour
relecture. Si on utilise la randomisation, pour que le code compile il
faut ajouter la ligne `#include "randomization.h"` et vérifier qu'il y
a bien dans le dossier courant un lien du fichier `randomization.h` se
trouvant dans `exercice_src`, et sinon créer ce lien avec la commande
`ln -s ../randomization.h`)

Tout exercice devra être relu avant de pouvoir être mis en production.

Un exercice ou une fiche d'exercices mis en production sur PLaTon,
n'est par défaut pas affecté par les modifications ultérieures sur le
dépôt git. Il faut qu'un des responsables (Hugo Mlodecki, Nicolas
Thiéry) fasse explicitement une mise à jour sur PLaTon.

# Makefile

Une fois que des exercices ont été implantés et rangés dans un sous dossier de `exercices_src`, un make pourra être fait par le responsable (hugo.mlodecki) pour générer les feuilles d'exercices dans le dossier `exercice`.

# Running the tests

    cd template
    python -m doctest -o NORMALIZE_WHITESPACE *.py
