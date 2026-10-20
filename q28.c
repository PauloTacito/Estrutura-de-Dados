#include <stdio.h>

int main(void) {
    int n, s = 0;

    printf("Digite um numero natural: ");
    scanf("%d", &n);

    while (n > 0) {
        s = s + n % 10;
        n = n / 10;
    }

    printf("Soma dos digitos: %d\n", s);

    return 0;
}