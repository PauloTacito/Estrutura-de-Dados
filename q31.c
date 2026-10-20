#include <stdio.h>

int main(void) {
    int n;
    int p = 0, i = 0;
    int map = 0, mep = 0;
    int mai= 0, mei = 0;

    printf("Digite um numero (0 para encerrar): ");
    scanf("%d", &n);

    while (n != 0) {
        if (n % 2 == 0) {
            if (p == 0) {         
                map = n;
                mep = n;
            } else {
                if (n > map) {
                    map = n;
                }
                if (n < mep) {
                    mep = n;
                }
            }
            p++;
        } else {
            if (i == 0) {       
                mai = n;
                mei = n;
            } else {
                if (n > mai) {
                    mai = n;
                }
                if (n < mei) {
                    mei = n;
                }
            }
            i++;
        }

        printf("Digite um numero (0 para encerrar): ");
        scanf("%d", &n);
    }

    printf("\nQuantidade de pares: %d\n", p);
    printf("Quantidade de impares: %d\n", i);

    if (p == 0) {
        printf("Nao ha numeros pares.\n");
    } else {
        printf("Maior par: %d\n", map);
        printf("Menor par: %d\n", mep);
    }

    if (i == 0) {
        printf("Nao ha numeros impares.\n");
    } else {
        printf("Maior impar: %d\n", mai);
        printf("Menor impar: %d\n", mei);
    }

    return 0;
}