#include <stdio.h>

int main() {
    int a = 2;     
    int b = 3;     
    int resultat = 1; 

    // Boucle pour calculer a^b
    for (int i = 0; i < b; i++) {
        resultat = resultat * a;
    }

    // Affichage du résultat
    printf("%d élevé à la puissance %d = %d\n", a, b, resultat);

    return 0;
}

