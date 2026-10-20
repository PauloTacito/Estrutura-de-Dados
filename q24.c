#include <stdio.h>

int main(void) {
    int n, i;
    unsigned long long ant = 1, at = 1, p;

    printf("Digite n (n >= 3): ");
    scanf("%d", &n);

    for (i = 3; i <= n; i++) {
        p = ant + at;
        ant = at;
        at = p;
    }

    printf("O %d-esimo termo e: %llu\n", n, at);

    return 0;
}