#include <stdio.h>

int main(void) {
    int cl, conv;
    double v, r;

    do {
        printf("\n===== CONVERSOR DE UNIDADES =====\n");
        printf("1 - Peso\n");
        printf("2 - Volume\n");
        printf("3 - Comprimento\n");
        printf("4 - Sair\n");
        printf("Escolha a classe: ");
        scanf("%d", &cl);

        switch (cl) {
            case 1:
                printf("\n--- Peso ---\n");
                printf("1 - Libra -> Quilograma\n");
                printf("2 - Quilograma -> Libra\n");
                printf("3 - Onca -> Grama\n");
                printf("4 - Grama -> Onca\n");
                printf("Escolha a conversao: ");
                scanf("%d", &conv);

                if (conv < 1 || conv > 4) {
                    printf("Conversao invalida.\n");
                    break;
                }

                printf("Digite o valor: ");
                scanf("%lf", &v);

                switch (conv) {
                    case 1:
                        r = v * 0.4536;
                        printf("%g lb = %.4f kg\n", v, r);
                        break;
                    case 2:
                        r = v / 0.4536;
                        printf("%g kg = %.4f lb\n", v, r);
                        break;
                    case 3:
                        r = v * 28.3495;
                        printf("%g oz = %.4f g\n", v, r);
                        break;
                    case 4:
                        r = v / 28.3495;
                        printf("%g g = %.4f oz\n", v, r);
                        break;
                }
                break;

            case 2:
                printf("\n--- Volume ---\n");
                printf("1 - Galao -> Litro\n");
                printf("2 - Litro -> Galao\n");
                printf("3 - Onca liquida -> Mililitro\n");
                printf("4 - Mililitro -> Onca liquida\n");
                printf("Escolha a conversao: ");
                scanf("%d", &conv);

                if (conv < 1 || conv > 4) {
                    printf("Conversao invalida.\n");
                    break;
                }

                printf("Digite o valor: ");
                scanf("%lf", &v);

                switch (conv) {
                    case 1:
                        r = v * 3.7854;
                        printf("%g gal = %.4f L\n", v, r);
                        break;
                    case 2:
                        r = v * 3.7854;
                        printf("%g L = %.4f gal\n", v, r);
                        break;
                    case 3:
                        r = v * 29.5735;
                        printf("%g fl oz = %.4f mL\n", v, r);
                        break;
                    case 4:
                        r = v / 29.5735;
                        printf("%g mL = %.4f fl oz\n", v, r);
                        break;
                }
                break;

            case 3:
                printf("\n--- Comprimento ---\n");
                printf("1 - Milha -> Quilometro\n");
                printf("2 - Quilometro -> Milha\n");
                printf("3 - Jarda -> Metro\n");
                printf("4 - Metro -> Jarda\n");
                printf("Escolha a conversao: ");
                scanf("%d", &conv);

                if (conv < 1 || conv > 4) {
                    printf("Conversao invalida.\n");
                    break;
                }

                printf("Digite o valor: ");
                scanf("%lf", &v);

                switch (conv) {
                    case 1:
                        r = v * 1.6093;
                        printf("%g mi = %.4f km\n", v, r);
                        break;
                    case 2:
                        r = v / 1.6093;
                        printf("%g km = %.4f mi\n", v, r);
                        break;
                    case 3:
                        r = v * 0.9144;
                        printf("%g yd = %.4f m\n", v, r);
                        break;
                    case 4:
                        r = v / 0.9144;
                        printf("%g m = %.4f yd\n", v, r);
                        break;
                }
                break;

            case 4:
                printf("Saindo...\n");
                break;

            default:
                printf("Opcao invalida.\n");
        }
    } while (cl != 4);

    return 0;
}