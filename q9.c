#include <stdio.h>

int main(void) {
    double n, a;

    printf("Digite um numero real: ");
    scanf("%lf", &n);

    if (n < 0) {
        a = -n;
    } else {
        a = n;
    }

    printf("Valor absoluto: %.2f\n", a);

    return 0;
}