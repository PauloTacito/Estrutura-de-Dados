#include <stdio.h>

int main(void) {
    double n1, n2, media;

    printf("Digite a primeira nota: ");
    scanf("%lf", &n1);

    printf("Digite a segunda nota: ");
    scanf("%lf", &n2);
    media = (n1 + n2) / 2;

    printf("Media final: %.2f\n", media);

    return 0;
}