#include <stdio.h>

int main(void) {
    double s, n;

    printf("Digite o salario atual: ");
    scanf("%lf", &s);

    n = s * 1.05;

    if (s <= 750.00) {
        n = n + 100.00;
    }

    printf("Novo salario: R$ %.2f\n", n );

    return 0;
}