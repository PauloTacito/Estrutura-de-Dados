#include <stdio.h>

int main(void) {
    int n, i;

    printf("Digite um numero natural: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%d -> %d\n", i, i * i);
    }

    return 0;
}