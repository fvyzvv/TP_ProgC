#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tab[100];

    // Tableau trié
    for (int i = 0; i < 100; i++)
        tab[i] = i * 2;

    printf("Tableau trié :\n");
    for (int i = 0; i < 100; i++) printf("%d ", tab[i]);
    printf("\n\n");

    int x;
    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &x);

    int debut = 0, fin = 99, milieu;
    int trouve = 0;

    while (debut <= fin) {
        milieu = (debut + fin) / 2;

        if (tab[milieu] == x) {
            trouve = 1;
            break;
        }
        else if (tab[milieu] < x)
            debut = milieu + 1;
        else
            fin = milieu - 1;
    }

    if (trouve) printf("entier présent\n");
    else printf("entier absent\n");

    return 0;
}
