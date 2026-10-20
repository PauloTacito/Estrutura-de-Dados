#include <stdio.h>

int main(void) {
    int t, h, min, sec;

    printf("Digite a quantidade de segundos: ");
    scanf("%d", &t);

    h = t / 3600;
    min = (t % 3600) / 60;
    sec = t % 60;

    printf("%d hora%s, %d minuto%s e %d segundo%s\n",
           h, h == 1 ? "" : "s",
           min, min == 1 ? "" : "s",
           sec, sec == 1 ? "" : "s");

    return 0;
}