#include <stdio.h>

int main(void) {
    int n, i;
    int imp = 1;
    int q = 0;

    printf("Digite um numero natural: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        q = q + imp;
        imp = imp + 2;
    }

    printf("%d ao quadrado = %d\n", n, q);

    return 0;
}