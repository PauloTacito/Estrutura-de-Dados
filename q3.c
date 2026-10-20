#include <stdio.h>

int main(void) {
    double fah, cel;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%lf", &fah);

    cel = (fah - 32) * 5 / 9;

    printf("Temperatura em Celsius: %.2f\n", cel);

    return 0;
}