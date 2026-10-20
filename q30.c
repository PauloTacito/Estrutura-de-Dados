#include <stdio.h>

int main(void) {
    double n, men, mai;

    printf("Digite um numero (0 para encerrar): ");
    scanf("%lf", &n);

    men = n;
    mai = n;

    while (n != 0) {
        if (n < men) {
            men = n;
        }
        if (n > mai) {
            mai = n;
        }

        printf("Digite um numero (0 para encerrar): ");
        scanf("%lf", &n);
    }

    printf("Menor: %g\n", men);
    printf("Maior: %g\n", mai);

    return 0;
}