# cpp-info111

This is an exerciser for PremierLanguage ...

# Makefile

Une fois que des exercices ont été implantés et rangés dans un sous dossier de `exercices_src`, 
un make pourra être fait par le responsable (hugo.mlodecki) pour générer 
les feuilles d'exercices dans le dossier `exercice`.

# Contribution

Les chargés de TP doivent dans un sous dossier de `exerice_src` créé des exercices 
qui correspondent au thème. Tout exercice devra être relu avant de pouvoir être mis en prod.
Une fois qu'une fiche (qui correspond à un dossier) est mise en prod, 
modifier les fichier exercices ne modifiera pas ceux de la fiche sur PL. 
Si vous faite une correction il faut prévenir le responsable (hugo.mlodecki) 
pour qu'il actualise la fiche !

## 3 types d'exos

PremierLanguage permier de faire principalement 3 types d'exercices :

- output
- input
- code

dont les consignes principales sont les suivantes :
"Quel nombre devrait saisir l'utilisateur pour que le programme C++ suivant affiche 42?"
"Lire attentivement la partie de programme suivant et saisir ce que vous prévoyez qu'il affiche."
"Compléter le programme suivant en suivant les instructions"

Pour ajouter des consignes autres que celles-ci, 
il faut les mettre en commentaire *visible pour les étudiants*.

Tous les fichiers cpp doivent avoir une terminaison qui correspont au type d'exercice 
auquel il correspond, par exemple `test_input.cpp` correspond à un exercice de type *input*.
Si rien n'est précisé, l'exercice sera par défaut un exercice *output*.

## Cacher du code (balises)

- /// BEGIN|END HIDDEN
	Ces balises vont simplement cacher aux étudiants ce qui s'y trouve. 
	L'un des interets principaux et de communiquer aux relecteur et autre chargés de TP 
	les interets pédagogiques des exercices que l'ont créé.
	L'autre interet majeur est de pouvoir cacher aux étudiants l'aspect aléatoire des exercices
	(voir partie Randomisation)
	Il est aussi possible de cacher des parties de codes aux étudiants pour insister 
	sur un objectif pédagogique précis. (voir les fichiers exemples)

- /// BEGIN|END SOLUTION
	Ces balises sont utilisées uniquement pour les exercices de type *code* 
	(voir le fichier exemple corespondant).
	Le contributeur écrit alors une solution qui répond à la question posé, 
	le resultat affiché avec cette solution sera alors comparé à l'affichage du code de l'étudiant.
	*Attention* ! C'est l'affichage qui est comparé ! 
	(voir le fichier exemple de code pour contourner ce problème)	
	
- /// BEGIN|END INITSOLUTION
	Ces balises sont aussi utilisées uniquement pour les exercices de type *code*.
	De plus, la balise */// BEGIN INITSOLUTION* doit se trouver immédiatement après une balise
	*/// END SOLUTION* et tout le contenu de cette initiation de solution doit être commenté
	par des *///* (voir le fichier exemple de code).
	Cela permet d'initialiser la zone d'édition pour les étudiants 
	(encore une fois pour appuyer sur un objectif pédagogique précis).

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
`exrcices_src/tests/test_output.cpp`
`exrcices_src/tests/test_input.cpp`
`exrcices_src/tests/test_code.cpp`
`exrcices_src/tests/test_multisolution_code.cpp`

Ces fichiers exemples sont les plus importants à comprendre pour pouvoir implanter des exercices.


# Running the tests

    cd template
    python -m doctest -o NORMALIZE_WHITESPACE *.py
