
#include <stdio.h>
#include "operator.h"
#include "fichier.h"
#include "liste.h"

void exercice41();
void exercice42();
void exercice47();

int main() {
    int choix;

    printf("Quel exercice voulez-vous exécuter ?\n");
    printf("1 : Exercice 4.1\n");
    printf("2 : Exercice 4.2\n");
    printf("3 : Exercice 4.7\n");
    printf("> ");
    scanf("%d", &choix);

    switch (choix) {
        case 1: exercice41(); break;
        case 2: exercice42(); break;
        case 3: exercice47(); break;
        default: printf("Choix invalide.\n");
    }

    return 0;
}
