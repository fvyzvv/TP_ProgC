#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tab[100];
    int x, trouve = 0;

    srand(time(NULL));
    for (int i = 0; i < 100; i++) {
        tab[i] = rand() % 1000 - 500;
        printf("%d ", tab[i]);
    }

    printf("\n\nEntrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &x);

    for (int i = 0; i < 100; i++) {
        if (tab[i] == x) {
            trouve = 1;
            break;
        }
    }

    if (trouve) printf("entier présent\n");
    else printf("entier absent\n");

    return 0;
}
