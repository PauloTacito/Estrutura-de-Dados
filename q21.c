#include <stdio.h>

int main(void) {
    int n, i;
    unsigned long long f = 1;

    printf("Digite um numero natural: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++) {
        f = f * i;
    }

    printf("%d! = %llu\n", n, f);

    return 0;
}