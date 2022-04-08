#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* 3 - Sorteie dois números de 1 a 5 e peça que o usuário acerte os dois números, não necessariamente na mesma ordem. */

int main(void){
    int sort1, sort2, num1, num2;

    srand(time(NULL));
    sort1 = rand() % 5 + 1;
    sort2 = rand() % 5 + 1;
    printf("Numero sorteado 1: %d\n", sort1);
    printf("Numero sorteado 2: %d\n", sort2);

    printf("Tente advinhar dois valores...");

    printf("Informe o primeiro valor: ");
    scanf("%d", &num1);

    printf("Informe o segundo valor: ");
    scanf("%d", &num2);

    if(num1 == sort1 || num1 == sort2){
        printf("Voce acertou com o primeiro valor\n");
    }
    else{
        printf("Errou -> Primeiro valor inserido: %d != do Primeiro Numero sorteado: %d\n", num1, sort1);
        printf("Errou -> Primeiro valor inserido: %d != do Segundo Numero sorteado: %d\n", num1, sort2);
    }


    if(num2 == sort1 || num2 == sort2){
        printf("Voce acertou com o segundo valor\n");
    }
    else{
        printf("Errou -> Segundo valor inserido: %d != do Primeiro Numero sorteado: %d\n", num2, sort1);
        printf("Errou -> Segundo valor inserido: %d != do Segundo Numero sorteado: %d\n", num2, sort2);
    }

    return 0;
}