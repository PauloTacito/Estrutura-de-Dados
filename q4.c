#include <stdio.h>

int main(void) {
    double l, a, p, v;

    printf("Digite a largura: ");
    scanf("%lf", &l);

    printf("Digite a altura: ");
    scanf("%lf", &a);

    printf("Digite a profundidade: ");
    scanf("%lf", &p);

    v = l * a * p;

    printf("Volume: %.2f\n", v);

    return 0;
}