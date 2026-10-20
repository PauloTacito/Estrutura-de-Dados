#include <stdio.h>

int main(void) {
    int n, i;
    long long numero = 0;

    printf("Quantidade de algarismos: ");
    scanf("%d", &n);

    int v[n]; 

    printf("Digite os %d algarismos: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    for (i = n - 1; i >= 0; i--) {  
        numero = numero * 10 + v[i];
    }

    printf("Numero: %lld\n", numero);

    return 0;
}