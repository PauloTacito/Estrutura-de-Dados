#include <stdio.h>

int main(void) {
    int n, i;

    printf("Digite um valor inteiro: ");
    scanf("%d", &n);

    for (i = n; i >= 0; i--) {
        printf("%d\n", i);
    }

    return 0;
}