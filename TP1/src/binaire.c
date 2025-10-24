#include <stdio.h>

int main() {
    unsigned int nombre; // on utilise unsigned pour éviter les bits de signe négatif

    // Liste des nombres à tester
    unsigned int valeurs[] = {0, 4096, 65536, 65535, 1024};
    int taille = sizeof(valeurs) / sizeof(valeurs[0]);

    // Parcours des nombres à tester
    for (int i = 0; i < taille; i++) {
        nombre = valeurs[i];
        printf("Nombre : %u\nBinaire : ", nombre);

        // Affichage binaire (on part du bit le plus significatif vers le moins)
        for (int bit = 31; bit >= 0; bit--) {
            unsigned int masque = 1 << bit;  // décalage de 1 vers la gauche
            if (nombre & masque)
                printf("1");
            else
                printf("0");

            // Pour rendre l’affichage plus lisible : espace tous les 8 bits
            if (bit % 8 == 0) {
                printf(" ");
            }
        }
        printf("\n\n");
    }

    return 0;
}
