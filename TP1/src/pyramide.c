#include <stdio.h>

int main() {
    int n = 5; // Hauteur de la pyramide
    int i, j;

    for (i = 1; i <= n; i++) {
        // 1️⃣ Afficher les espaces pour centrer la pyramide
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // 2️⃣ Afficher les nombres croissants de 1 à i
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // 3️⃣ Afficher les nombres décroissants de i-1 à 1
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        // Passer à la ligne suivante
        printf("\n");
    }

    printf("\nGénération de la pyramide terminée !\n");

    return 0;
}

