#include <stdio.h>

int main(void) {
    double a, b;

    printf("Digite o primeiro numero: ");
    scanf("%lf", &a);

    printf("Digite o segundo numero: ");
    scanf("%lf", &b);

    if (a > b) {
        printf("O maior numero e: %.2f\n", a);
    } else {
        printf("O maior numero e: %.2f\n", b);
    }

    return 0;
}