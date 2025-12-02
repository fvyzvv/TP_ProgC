#include <stdio.h>

int main() {
    char noms[5][50] = {
        "Durand", "Martin", "Kaya", "Benali", "Rossi"
    };

    char prenoms[5][50] = {
        "Alice", "Leo", "Feyza", "Samir", "Lucia"
    };

    char adresses[5][100] = {
        "12 Rue des Fleurs",
        "48 Avenue de Paris",
        "5 Impasse du Soleil",
        "21 Boulevard Victor",
        "9 Rue des Arts"
    };

    float noteProg[5] = {14.5, 12.0, 18.0, 9.5, 13.0};
    float noteSE[5]   = {13.0, 15.5, 17.5, 8.0, 14.0};

    for (int i = 0; i < 5; i++) {
        printf("Étudiant %d :\n", i + 1);
        printf("Nom        : %s\n", noms[i]);
        printf("Prénom     : %s\n", prenoms[i]);
        printf("Adresse    : %s\n", adresses[i]);
        printf("Prog en C  : %.2f\n", noteProg[i]);
        printf("Sys Explo  : %.2f\n\n", noteSE[i]);
    }

    return 0;
}
