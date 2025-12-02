#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int t_int[11];
    float t_float[11];

    srand(time(NULL));

    for (int i = 0; i < 11; i++) {
        t_int[i] = rand() % 200;
        t_float[i] = (rand() % 1000) / 10.0;
    }

    printf("=== Avant ===\nInt : ");
    for (int i = 0; i < 11; i++) printf("%d ", t_int[i]);
    printf("\nFloat : ");
    for (int i = 0; i < 11; i++) printf("%.2f ", t_float[i]);
    printf("\n\n");

    int *pi = t_int;
    float *pf = t_float;

    for (int i = 0; i < 11; i++) {
        if (i % 2 == 0) {
            *(pi + i) *= 3;
            *(pf + i) *= 3;
        }
    }

    printf("=== Après ===\nInt : ");
    for (int i = 0; i < 11; i++) printf("%d ", t_int[i]);
    printf("\nFloat : ");
    for (int i = 0; i < 11; i++) printf("%.2f ", t_float[i]);
    printf("\n");

    return 0;
}
