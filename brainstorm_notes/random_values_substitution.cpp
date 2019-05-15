// HIDDEN

CONST F = RANDOM_CHOICE("f", "g", "h");
SUBST F = RANDOM_CHOICE("f", "g", "h");
SUBST PLUS_OU_MOINS = RANDOM_CHOICE("f", "g", "h");
SUBST X,Y,Z = PERMUTATION("x", "y", "z")

int main() {
     F(3)
}


=>

int main() {
    f(3)
}
