#include <stdio.h>

int main (void) {
    double n1, n2, media;

    printf("Informe a primeira nota:\n");
    scanf("%lf", &n1);

    printf("Informe a segunda nota:\n");
    scanf("%lf", &n2);
    
    media = (n1 + n2) / 2;

    printf("A média final é igual a: %2f\n", media);

    return  0;
    
}