#include <stdio.h>

int main(void) {
    int v, r;
    int n100, n50, n20, n10, n5, n2, n1;

    printf("Digite o valor em reais: ");
    scanf("%d", &v);

    n100 = v / 100;
    r = v % 100;

    n50 = r / 50;
    r = r % 50;

    n20 = r / 20;
    r = r % 20;

    n10 = r / 10;
    r = r % 10;
    
    n5 = r / 5;
    r = r % 5;

    n2 = r / 2;
    r = r % 2;

    n1 = r;

    printf("Cedulas de R$ 100: %d\n", n100);
    printf("Cedulas de R$ 50: %d\n", n50);
    printf("Cedulas de R$ 20: %d\n", n20);
    printf("Cedulas de R$ 10: %d\n", n10);
    printf("Cedulas de R$ 5: %d\n", n5);
    printf("Cedulas de R$ 2: %d\n", n2);
    printf("Cedulas de R$ 1: %d\n", n1);

    return 0;
}