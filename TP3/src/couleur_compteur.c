#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    unsigned char r, g, b, a;
} Couleur;

typedef struct {
    Couleur c;
    int count;
} CouleurCount;

int couleurs_egales(Couleur a, Couleur b) {
    return (a.r == b.r && a.g == b.g && a.b == b.b && a.a == b.a);
}

int main() {
    Couleur tab[100];
    CouleurCount distinct[100];
    int nbDistinct = 0;

    srand(time(NULL));

    // Remplissage aléatoire
    for (int i = 0; i < 100; i++) {
        tab[i].r = rand() % 256;
        tab[i].g = rand() % 256;
        tab[i].b = rand() % 256;
        tab[i].a = rand() % 256;
    }

    // Comptage
    for (int i = 0; i < 100; i++) {
        int found = 0;

        for (int j = 0; j < nbDistinct; j++) {
            if (couleurs_egales(tab[i], distinct[j].c)) {
                distinct[j].count++;
                found = 1;
                break;
            }
        }

        if (!found) {
            distinct[nbDistinct].c = tab[i];
            distinct[nbDistinct].count = 1;
            nbDistinct++;
        }
    }

    // Affichage
    for (int k = 0; k < nbDistinct; k++) {
        printf("%02x %02x %02x %02x : %d\n",
            distinct[k].c.r,
            distinct[k].c.g,
            distinct[k].c.b,
            distinct[k].c.a,
            distinct[k].count
        );
    }

    return 0;
}
