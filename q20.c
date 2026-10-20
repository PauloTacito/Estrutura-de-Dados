#include <stdio.h>

int main(void) {
    double p;

    printf("Polegadas   Centimetros\n");

    for (p = 0.0; p <= 10.0; p += 0.5) {
        printf("%-11.1f %.2f\n", p, p * 2.54);
    }

    return 0;
}