#include <stdio.h>
#include <string.h>

struct Etudiant {
    char nom[50];
    char prenom[50];
    char adresse[100];
    float note1;
    float note2;
};

int main() {
    struct Etudiant etudiants[5];

    strcpy(etudiants[0].nom, "Bahtiyar");
    strcpy(etudiants[0].prenom, "Namir");
    strcpy(etudiants[0].adresse, "12 Rue des Fleurs");
    etudiants[0].note1 = 14.5; etudiants[0].note2 = 13.0;

    strcpy(etudiants[1].nom, "Arslan");
    strcpy(etudiants[1].prenom, "Bilal");
    strcpy(etudiants[1].adresse, "48 Avenue de Paris");
    etudiants[1].note1 = 12.0; etudiants[1].note2 = 15.5;

    strcpy(etudiants[2].nom, "Bahtiyar");
    strcpy(etudiants[2].prenom, "Feyza");
    strcpy(etudiants[2].adresse, "5 Impasse du Soleil");
    etudiants[2].note1 = 20.0; etudiants[2].note2 = 20.5;

    strcpy(etudiants[3].nom, "Belkacem");
    strcpy(etudiants[3].prenom, "Alya");
    strcpy(etudiants[3].adresse, "21 Boulevard Victor");
    etudiants[3].note1 = 9.5; etudiants[3].note2 = 8.0;

    strcpy(etudiants[4].nom, "AYI");
    strcpy(etudiants[4].prenom, "AYI");
    strcpy(etudiants[4].adresse, "9 Rue des Arts");
    etudiants[4].note1 = 13.0; etudiants[4].note2 = 14.0;

    for (int i = 0; i < 5; i++) {
        printf("Étudiant %d :\n", i + 1);
        printf("Nom     : %s\n", etudiants[i].nom);
        printf("Prénom  : %s\n", etudiants[i].prenom);
        printf("Adresse : %s\n", etudiants[i].adresse);
        printf("Note 1  : %.2f\n", etudiants[i].note1);
        printf("Note 2  : %.2f\n\n", etudiants[i].note2);
    }

    return 0;
}
