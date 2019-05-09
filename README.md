# cpp-info111

This is an exerciser for PremierLanguage ...

# Makefile

Une fois que des exercices ont été implantés et rangés dans un sous dossier de `exercices_src`, un make pourra être fait par le responsable (hugo.mlodecki) pour générer les feuilles d'exercices dans le dossier `exercice`.

# Contribution

Les chargés de TP doivent dans un sous dossier de `exercice_src` créer des exercices qui correspondent au thème et les push sur le git.
Une liste de Thèmes se trouve dans le dossier principal, le but est d'avoir un nombre important d'exercices correspondant à toutes les notions étudiés en cours par les étudiants et de les regroupés au maximum par thèmes. Dans le sous dossier `exercice_src` il y a déjà un certain nombre de sous dossiers correspondant à des thèmes. Certains de ces dossiers ne contiennent qu'un seul exercice ou deux, il faudrait donc en créer d'avantage. Ensuite pour créer un exercice, l'idée est de s'appuyer sur les erreurs fréquentes que l'on peut voir dans le travail des étudiants pour faire des exercices simples qui visent un but pédagogique précis.
Enfin pour créer des exercices il faut suivre les autres instructions disponible ci-dessous et s'inspirer d'exemples. L'un des but principaux est de faire des exercices où les étudiants doivent coder des fonctions. Par exemple comme les fichiers : `exercices_src/struct_tableaux/struct_tableaux_ajouteBoite_code.cpp` et `exercices_src/struct_simple/struct_P3D_eq_code.cpp`.

Lors de la conception d'un exercice, il est indispensable de tester que le code compile avec g++ avant de le push sur le git pour relecture. C'est pour cela qu'il faut bien ajouter la ligne `#include "randomization.h"` et faire un lien du fichier `randomization.h` ce trouvant dans `exercice_src` vers le dossier courant (avec la commande `ln -s ../randomization.h`).

Tout exercice devra être relu avant de pouvoir être mis en prod. Une fois qu'une fiche (qui correspond à un dossier) est mise en prod, push sur le git des modifications des fichiers exercices ne modifiera pas ceux de la fiche sur PL. Si vous faite une correction sur le git, il faut en plus prévenir le responsable (hugo.mlodecki) pour qu'il actualise la fiche !

## 3 types d'exos

PremierLanguage permet de faire principalement 3 types d'exercices :

- output
- input
- code

dont les consignes principales sont les suivantes :
"Lire attentivement la partie de programme suivant et saisir ce que vous prévoyez qu'il affiche."
Le programme montré à l'étudiant doit donc afficher un résultat qu'ils devront deviner.

"Quel nombre devrait saisir l'utilisateur pour que le programme C++ suivant affiche 42?"
Il faut donc que le programme demande à un moment à l'utilisateur de rentrer une donnée (avec un `cin` pour le c++) et qu'il existe toujours une entrée pour que le programme affiche la valeur 42.

"Compléter le programme suivant en suivant les instructions"


Pour ajouter des consignes autres que celles-ci, il faut les mettre en commentaire *visible pour les étudiants*.

Tous les fichiers cpp doivent avoir une terminaison qui correspond au type d'exercice auquel il correspond, par exemple `test_input.cpp` correspond à un exercice de type *input*. Si rien n'est précisé, l'exercice sera par défaut un exercice *output*.

## Cacher du code (balises)

- /// BEGIN|END HIDDEN
	Ces balises vont simplement cacher aux étudiants ce qui s'y trouve. 
	L'un des intérêts principaux et de communiquer aux relecteur et autre chargés de TP les interets pédagogiques des exercices que l'on créé.
	L'autre intérêt majeur est de pouvoir cacher aux étudiants l'aspect aléatoire des exercices
	(voir partie Randomisation)
	Il est aussi possible de cacher des parties de codes aux étudiants pour insister sur un objectif pédagogique précis. (voir les fichiers exemples)

- /// BEGIN|END SOLUTION
	Ces balises sont utilisées uniquement pour les exercices de type *code* 
	(voir le fichier exemple `exercices_src/tests/test_code.cpp`).
	Le contributeur écrit alors une solution qui répond à la question posé, le résultat affiché avec cette solution sera alors comparé à l'affichage du code de l'étudiant.
	*Attention* ! C'est l'affichage qui est comparé ! 
	(Par exemple dans le fichier `exercices_src/tests/test_code.cpp` la string généré par la fonction triangle est affiché)
	
- /// BEGIN|END INITSOLUTION
	Ces balises sont aussi utilisées uniquement pour les exercices de type *code*.
	De plus, la balise */// BEGIN INITSOLUTION* doit se trouver immédiatement après une balise
	*/// END SOLUTION* et tout le contenu de cette initiation de solution doit être commenté par des *///* (voir le fichier exemple `exercices_src/tests/test_code.cpp`).
	Cela permet d'initialiser la zone d'édition pour les étudiants (encore une fois pour appuyer sur un objectif pédagogique précis).
	Cette partie n'est utile que pour aider les étudiants avec du code à trous.

## Randomisation

Voici un rappel de toutes les randomisations possibles.

- RANDOM_INT(min, max)
- RANDOM_CHOICE("alice", "bob", "charlie")
- RANDOM_VECTOR(size, RANDOM_INT, min, max) 
- X, Y, Z
- I, J, K, N
- PLUSOUMOINS

à mettre au début du fichier cpp :

    /// BEGIN HIDDEN
    #include "randomization.h"
    CONST V = RANDOM_VECTOR(5, RANDOM_INT, 2, 10);
    CONST I = RANDOM_INT(2, 10);
    CONST S = RANDOM_CHOICE("alice", "bob", "charlie");
    CONST P = RANDOM_CHOICE(7, 13, 17, 21);
    /// END HIDDEN

## Exemples

Voir les fichiers ci-dessous :
`exercices_src/tests/test_output.cpp`
`exercices_src/tests/test_input.cpp`
`exercices_src/tests/test_code.cpp`
`exercices_src/tests/test_multisolution_code.cpp`

Ces fichiers exemples sont les plus importants à comprendre pour pouvoir implanter des exercices.


# Running the tests

    cd template
    python -m doctest -o NORMALIZE_WHITESPACE *.py
