/// BEGIN HIDDEN
/// Objectif pédagogique: écrire des tests simples

#include "randomization.h"
/// END HIDDEN

/* On suppose que vous disposez de la fonction dont l'en-tête est donné
   ci-dessous (vous ne devez donc pas écrire de code pour cette fonction) */
int F(int X);

/// BEGIN HIDDEN

// ASSERT doit être redéfinie pour ne pas afficher l'expression ni la ligne
#undef ASSERT
#define ASSERT(test) if (!(test)) std::cout << "Test failed in file " << __FILE__ \
				            << std::endl

// La fonction F sera appelée par le test de l'étudiant sur une seule
// valeur V. Aussi, pour vérifier que le test est correct, on va
// introduire un contexte et lancer le test de l'étudiant plusieurs
// fois en faisant varier ce contexte.

int contexte;
int F(int X) {
    return X - contexte;
}

CONST V = RANDOM_INT(-2, 2);
CONST T = RANDOM_INT(-2, 2);

int main() {
    for ( contexte = -10; contexte < 10; contexte ++ ) {
        std::cout << "V: " << V << ", contexte: " << contexte << std::endl;
        /// END HIDDEN
        /* En utilisant la fonction ASSERT, écrire un test vérifiant
         * que F(V) est supérieur ou égal à T (une seule ligne de code).
         */
        /// BEGIN SOLUTION
        ASSERT( F(V) >= T );
        /// END SOLUTION
        /// BEGIN HIDDEN
    }
}
/// END HIDDEN
