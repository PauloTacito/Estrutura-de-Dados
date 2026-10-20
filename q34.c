#include <stdio.h>

int main(void) {
    double s, o;
    double c = 0, d = 0, t, sf;

    printf("Saldo inicial? ");
    scanf("%lf", &s);

    printf("Operacao? ");
    scanf("%lf", &o);

    while (o != 0) {
        if (o > 0) {
            c = c + o;
        } else {
            d = d - o;  
        }

        printf("Operacao? ");
        scanf("%lf", &o);
    }

    t = d * 0.35;  
    sf = s + c - d - t;

    printf("\nTotal de creditos ....: R$ %.2f\n", c);
    printf("Total de debitos .....: R$ %.2f\n", d);
    printf("Taxa paga ............: R$ %.2f\n", t);
    printf("Saldo final ..........: R$ %.2f\n", sf);

    return 0;
}