# cpp-info111

This is an exerciser for PremierLanguage ...

# Makefile

make dans le repertoire principale, à documenter mais ça c'est pour moi

## tools/import from wims

faire de la doc pour moi...

# Contribution

Les chargés de TP doivent dans un sous dossier de `exerice_src` créé des exercices 
qui correspondent au thème. Tout exercice devra être relu avant de pouvoir être mis en prod.
Une fois qu'une fiche (qui correspond à un dossier) est mise en prod, 
modifier les fichier exercices ne modifiera pas ceux de la fiche sur PL. 
Si vous faite une correction il faut prévenir le responsable (hugo.mlodecki) 
pour qu'il actualise la fiche !

## 3 types d'exos

- output
- input
- code

Pour ajouter des consignes autres que : 
"Quel nombre devrait saisir l'utilisateur pour que le programme C++ suivant affiche 42?"
"Lire attentivement la partie de programme suivant et saisir ce que vous prévoyez qu'il affiche."
"Compléter le programme suivant en suivant les instructions"

Il faut les mettre en commentaire visible pour les étudiants.

## Cacher du code (balises)

- /// BEGIN|END HIDDEN
- /// BEGIN|END SOLUTION

## Randomisation

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

# Running the tests

    cd template
    python -m doctest -o NORMALIZE_WHITESPACE *.py
