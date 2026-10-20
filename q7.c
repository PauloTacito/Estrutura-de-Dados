#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, h;

    printf("Digite o primeiro cateto: ");
    scanf("%lf", &a);

    printf("Digite o segundo cateto: ");
    scanf("%lf", &b);

    h = sqrt(a * a + b);

    printf("Hipotenusa: %.2f\n", h);

    return 0;
}