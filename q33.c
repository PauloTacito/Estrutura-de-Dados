#include <stdio.h>

int main(void) {
    double p, t = 0;
    double per, d, vf;

    printf("Digite o preco (0 para encerrar): ");
    scanf("%lf", &p);

    while (p != 0) {
        t = t + p;

        printf("Digite o preco (0 para encerrar): ");
        scanf("%lf", &p);
    }

    if (t < 50.0) {
        per = 5;
    } else if (t < 100.0) {
        per = 10;
    } else if (t < 200.0) {  
        per = 15;
    } else {
        per = 20;
    }

    d = t * per / 100;
    vf = t - d;

    printf("\nTotal da compra: R$ %.2f\n", t);
    printf("Desconto: %.0f%%\n", per);
    printf("Valor do desconto: R$ %.2f\n", d);
    printf("Valor final a pagar: R$ %.2f\n", vf);

    return 0;
}