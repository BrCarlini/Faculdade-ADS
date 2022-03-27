#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* 2a - Escreva um programa que sorteia um número de 1 a 10 e dá duas chances para que o usuário acerte. Caso ele erre a primeira, o sistema permite que ele tente de novo. Não deve ser sorteado um novo número. */

int main(void){
    int s, num;

    srand(time(NULL)); 
    s = rand() % 10 + 1;
    /*printf("%d\n", s);*/

    printf("====================== Jogo da Advinhacao ======================\n");
    printf("Escolha um numero de 1 a 10: ");
    scanf("%d", &num);

    if(num == s){
        printf("Acertou de primeira");
    }
    else{
        printf("Voce errou, tente denovo: ");
        scanf("%d", &num);

        if(num == s){
            printf("Voce acertou na segunda chance");
        }
        else {
            printf("Errou as duas chances");
        }
    }

    return 0;
}