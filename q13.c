#include <stdio.h>

int main(void) {
    double a, b, c, maior;

    printf("Digite o primeiro numero: ");
    scanf("%lf", &a);

    printf("Digite o segundo numero: ");
    scanf("%lf", &b);

    printf("Digite o terceiro numero: ");
    scanf("%lf", &c);

    maior = a;

    if (b > maior) {
        maior = b;
    }

    if (c > maior) {
        maior = c;
    }

    printf("O maior numero e: %.2f\n", maior);

    return 0;
}