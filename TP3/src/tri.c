#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tab[100];

    srand(time(NULL));
    for (int i = 0; i < 100; i++) {
        tab[i] = rand() % 1000 - 500;
    }

    printf("Tableau non trié :\n");
    for (int i = 0; i < 100; i++) printf("%d ", tab[i]);
    printf("\n\n");

    // Tri à bulles
    for (int i = 0; i < 100 - 1; i++) {
        for (int j = 0; j < 100 - 1 - i; j++) {
            if (tab[j] > tab[j + 1]) {
                int tmp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = tmp;
            }
        }
    }

    printf("Tableau trié :\n");
    for (int i = 0; i < 100; i++) printf("%d ", tab[i]);
    printf("\n");

    return 0;
}
