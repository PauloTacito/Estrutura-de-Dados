#include <stdio.h>

int main(void) {
    double n1, n2, media;

    printf("Digite a primeira nota: ");
    scanf("%lf", &n1);

    printf("Digite a segunda nota: ");
    scanf("%lf", &n2);

    media = (n1 + n2) / 2;

    printf("Media: %.2f\n", media);

    if (media >= 7.0) {
        printf("Situacao: aprovado\n");
    } else if (media < 3.0) {
        printf("Situ9acao: reprovado\n");
    } else {
        printf("Situacao: recuperacao\n");
    }

    return 0;
}