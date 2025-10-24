#include <stdio.h>

int main() {
    // Déclaration et affectation des variables de base
    signed char c = -10;
    unsigned char uc = 200;

    signed short s = -32000;
    unsigned short us = 65000;

    signed int i = -1000;
    unsigned int ui = 4000;

    signed long int li = -1000000;
    unsigned long int uli = 2000000;

    signed long long int lli = -9000000000;
    unsigned long long int ulli = 9000000000;

    float f = 3.14f;
    double d = 2.718281828;
    long double ld = 1.6180339887;

    // Affichage des valeurs
    printf("signed char : %d\n", c);
    printf("unsigned char : %u\n", uc);

    printf("signed short : %d\n", s);
    printf("unsigned short : %u\n", us);

    printf("signed int : %d\n", i);
    printf("unsigned int : %u\n", ui);

    printf("signed long int : %ld\n", li);
    printf("unsigned long int : %lu\n", uli);

    printf("signed long long int : %lld\n", lli);
    printf("unsigned long long int : %llu\n", ulli);

    printf("float : %.2f\n", f);
    printf("double : %.6f\n", d);
    printf("long double : %.10Lf\n", ld);

    return 0;
}
