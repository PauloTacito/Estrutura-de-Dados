#include <stdio.h>

int main(void) {
    double a, b, resultado;
    char op;

    printf("Digite o primeiro numero: ");
    scanf("%lf", &a);

    printf("Digite o segundo numero: ");
    scanf("%lf", &b);

    printf("Digite a operacao (+, -, *, / ou :): ");
    scanf(" %c", &op);

    switch (op) {
        case '+':
            resultado = a + b;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '-':
            resultado = a - b;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '*':
            resultado = a * b;
            printf("Resultado: %.2f\n", resultado);

        case '/':
            if (b == 0) {
                printf("Erro: divisao por zero nao e permitida.\n");
            } else {
                resultado = a / b;
                printf("Resultado: %.2f\n", resultado);
            }
            break;
        default:
            printf("Operacao invalida.\n");
    }

    return 0;
}