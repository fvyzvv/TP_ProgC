#include <stdio.h>

int comparer(const char *a, const char *b) {
    int i = 0;
    while (a[i] != '\0' || b[i] != '\0') {
        if (a[i] != b[i]) return 0;
        i++;
    }
    return 1;
}

int main() {
    char phrases[10][200] = {
        "Bonjour, comment ça va ?",
        "Le temps est magnifique aujourd'hui.",
        "C'est une belle journée.",
        "La programmation en C est amusante.",
        "Les tableaux en C sont puissants.",
        "Les pointeurs en C peuvent être déroutants.",
        "Il fait beau dehors.",
        "La recherche dans un tableau est intéressante.",
        "Les structures de données sont importantes.",
        "Programmer en C, c'est génial."
    };

    char recherche[200];

    printf("Entrez la phrase à chercher : ");
    fgets(recherche, sizeof(recherche), stdin);

    // Retirer le \n final si présent
    int k = 0;
    while (recherche[k] != '\0') {
        if (recherche[k] == '\n') {
            recherche[k] = '\0';
            break;
        }
        k++;
    }

    int trouve = 0;
    for (int i = 0; i < 10; i++) {
        if (comparer(phrases[i], recherche)) {
            trouve = 1;
            break;
        }
    }

    if (trouve) printf("Phrase trouvée\n");
    else printf("Phrase non trouvée\n");

    return 0;
}
