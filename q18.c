#include <stdio.h>

int main(void) {
    int opcao;
    double a = 0, b = 0;

    do {
        printf("\n===== MENU =====\n");
        printf("1 - Somar\n");
        printf("2 - Subtrair\n");
        printf("3 - Multiplicar\n");
        printf("4 - Dividir\n");
        printf("5 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {
            printf("Digite o primeiro numero: ");
            scanf("%lf", &a);
            printf("Digite o segundo numero: ");
            scanf("%lf", &b);
        }

        switch (opcao) {
            case 1:
                printf("Resultado: %.2f\n", a + b);
                break;
            case 2:
                printf("Resultado: %.2f\n", a - b);
                break;
            case 3:
                printf("Resultado: %.2f\n", a * b);
                break;
            case 4:
                if (b == 0) {
                    printf("Erro: divisao por zero nao e permitida.\n");
                } else {
                    printf("Resultado: %.2f\n", a / b);
                }
                break;
            case 5:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida.\n");
        }
    } while (opcao = 5); 

    return 0;
}