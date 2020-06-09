/// Objectif pédagogique: écrire des assertions simples
/// BEGIN HIDDEN
#include "randomization.h"
/// END HIDDEN

// On suppose que l'on a à disposition une fonction avec le prototype suivant:
int F(int X);

/// BEGIN HIDDEN

// La fonction F sera appelée par le test de l'étudiant sur une seule
// valeur V. Aussi pour vérifier que le test est correct, on va
// introduire un contexte et lancer le test de l'étudiant plusieurs
// fois en faisant varier ce contexte.

int contexte;
int F(int X) {
    return X - contexte;
}

CONST V = RANDOM_INT(0, 7);

int main() {
    for ( contexte = 0; contexte < 10; contexte ++ ) {
        /// END HIDDEN
        // Écrire un test vérifiant que F(V) est positif ou nul
        std::cout << "V: " << V << ", contexte: " << contexte << std::endl;
        /// BEGIN SOLUTION
        ASSERT( F(V) >= 0 );
        /// END SOLUTION
        /// BEGIN HIDDEN
    }
}
/// END HIDDEN
