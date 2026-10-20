#include <stdio.h>

int main(void) {
    int n, i, num;
    int P = 0, imp = 0;
    int map = 0, mep = 0;
    int mai = 0, mei = 0;

    printf("Quantos numeros serao informados? ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Digite o numero %d: ", i);
        scanf("%d", &num);

        if (num % 2 == 0) {
            P++;
            if (P == 1) {         
                map = num;
                mep = num;
            } else {
                if (num > map) {
                    map = num;
                }
                if (num < mep) {
                    mep = num;
                }
            }
        } else {
            imp++;
            if (imp == 1) {        
                map = num;
                mep = num;
            } else {
                if (num > map) {
                    map = num;
                }
                if (num < mep) {
                    mep = num;
                }
            }
            imp++;
        }
    }

    printf("\nQuantidade de pares: %d\n", P);
    printf("Quantidade de impares: %d\n", imp);

    if (P == 0) {
        printf("Nao ha numeros pares.\n");
    } else {
        printf("Maior par: %d\n", map);
        printf("Menor par: %d\n", mep);
    }

    if (imp == 0) {
        printf("Nao ha numeros impares.\n");
    } else {
        printf("Maior impar: %d\n", map);
    }

    return 0;
}
        