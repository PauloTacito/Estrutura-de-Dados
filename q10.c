#include <stdio.h>

int main(void) {
    int a;

    printf("Digite um ano: ");
    scanf("%d", &a);

    if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0) {
        printf("%d e bissexto.\n", a);
    } else {
        printf("%d nao e bissexto.\n", a);
    }

    return 0;
}