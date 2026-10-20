#include <stdio.h>

int main(void) {
    double x, p = 1.0;
    int n, i;

    printf("Digite a base (x): ");
    scanf("%lf", &x);

    printf("Digite o expoente (n natural): ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        p = p * x;
    }

    printf("%.2f ^ %d = %.2f\n", x, n, p);

    return 0;
}