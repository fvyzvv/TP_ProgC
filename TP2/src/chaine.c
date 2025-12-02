#include <stdio.h>

int longueur(const char *str) {
    int count = 0;
    while (str[count] != '\0') {
        count++;
    }
    return count;
}

void copie(char *dest, const char *src) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

void concat(char *dest, const char *src) {
    int i = 0;
    while (dest[i] != '\0') {
        i++;
    }

    int j = 0;
    while (src[j] != '\0') {
        dest[i + j] = src[j];
        j++;
    }
    dest[i + j] = '\0';
}

int main() {
    char str1[100] = "Hello";
    char str2[100] = " World!";
    char copieStr[100];

    printf("Longueur de str1 : %d\n", longueur(str1));

    copie(copieStr, str1);
    printf("Copie : %s\n", copieStr);

    concat(str1, str2);
    printf("Concaténation : %s\n", str1);

    return 0;
}
