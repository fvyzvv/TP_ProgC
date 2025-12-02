#include <stdio.h>

int main() {
    int n;
    printf("Entrez la valeur de n : ");
    scanf("%d", &n);

    int u0 = 0, u1 = 1, u;

    if (n >= 0) printf("%d ", u0);
    if (n >= 1) printf("%d ", u1);

    for (int i = 2; i <= n; i++) {
        u = u0 + u1;
        printf("%d ", u);
        u0 = u1;
        u1 = u;
    }

    printf("\n");
    return 0;
}
