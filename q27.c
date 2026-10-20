#include <stdio.h>

int main(void) {
    int n, i;
    int q = 0;

    printf("Digite um numero natural: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            q++;
        }
    }

    if (q == 2) {
        printf("%d e primo.\n", n);
    } else {
        printf("%d nao e primo.\n", n);
    }

    return 0;
}