#include <stdio.h>

int main() {
    char c = 'A';
    short s = 123;
    int i = 456;
    long li = 789;
    long long lli = 999999;
    float f = 1.5;
    double d = 3.1415;
    long double ld = 2.718281828;

    char *pc = &c;
    short *ps = &s;
    int *pi = &i;
    long *pli = &li;
    long long *plli = &lli;
    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    printf("=== Avant manipulation ===\n");
    printf("c  : addr=%p, val=%lx\n", (void*)pc, *(unsigned long*)&c);
    printf("s  : addr=%p, val=%lx\n", (void*)ps, *(unsigned long*)&s);
    printf("i  : addr=%p, val=%lx\n", (void*)pi, *(unsigned long*)&i);
    printf("li : addr=%p, val=%lx\n", (void*)pli, *(unsigned long*)&li);
    printf("lli: addr=%p, val=%lx\n", (void*)plli, *(unsigned long*)&lli);
    printf("f  : addr=%p, val=%lx\n", (void*)pf, *(unsigned long*)&f);
    printf("d  : addr=%p, val=%lx\n", (void*)pd, *(unsigned long*)&d);
    printf("ld : addr=%p, val=%lx\n\n", (void*)pld, *(unsigned long*)&ld);

    *pi = 1234;
    *pf = 2.0;
    *pd = 1.0;
    *pli = 42;

    printf("=== Après manipulation ===\n");
    printf("i  : addr=%p, val=%lx\n", (void*)pi, *(unsigned long*)&i);
    printf("f  : addr=%p, val=%lx\n", (void*)pf, *(unsigned long*)&f);
    printf("d  : addr=%p, val=%lx\n", (void*)pd, *(unsigned long*)&d);
    printf("li : addr=%p, val=%lx\n", (void*)pli, *(unsigned long*)&li);

    return 0;
}
