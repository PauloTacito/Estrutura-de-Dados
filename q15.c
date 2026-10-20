#include <stdio.h>

int main(void) {
    printf("%d %d %d %d\n",
           !3,
           !0,
           3 + 'a' > 'b' + 2 && !'b',
           1 || !2 && 3);

    return 0;
    }

//Em C, 0 é falso e qualquer outra coisa é verdadeiro. Todo !, &&, || e comparação devolve só 0 ou 1. 
//1º: !3
//O 3 é verdadeiro, o ! inverte e vira falso. Dá 0.
//2º: !0
//O 0 é falso, o ! inverte e vira verdadeiro. Dá 1.
//3º: 3 + 'a' > 'b' + 2 && !'b'
//Aqui as letras viram número (ASCII): 'a' = 97 e 'b' = 98.
//3 + 97 = 100 e 98 + 2 = 100
//100 > 100 é falso, porque são iguais e não um maior que o outro
//Com &&, se um lado já é falso, tudo é falso
//Dá 0. Nem precisa olhar o !'b'.