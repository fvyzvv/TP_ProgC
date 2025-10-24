#include <stdio.h>

int main() {
    int compteur = 5; // Tu peux changer la taille ici

    // Vérifie que compteur < 10
    if (compteur >= 10) {
        printf("Erreur : le compteur doit être inférieur à 10.\n");
        return 1; // Sort du programme
    }

    // Boucles imbriquées pour dessiner le triangle
    for (int i = 1; i <= compteur; i++) {
        for (int j = 1; j <= i; j++) {
            // Conditions pour choisir entre * et #
            if (i == 1 || i == compteur || j == 1 || j == i) {
                printf("* ");
            } else {
                printf("# ");
            }
        }
        printf("\n"); // Retour à la ligne après chaque rangée
    }

    return 0;
}
