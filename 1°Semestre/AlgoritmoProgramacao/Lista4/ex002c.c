#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* 2b - Escreva um programa que sorteia um número de 1 a 10, dá duas chances para que o usuário acerte, como o anterior, mas informa se o número sorteado é maior ou menor que o primeiro palpite. */

int main(void){
    int s, num;

    srand(time(NULL));
    s = rand() % 10 + 1;
    /*printf("%d\n", s);*/

    printf("Digite um numero: ");
    scanf("%d", &num);

    if(num == s){
        printf("Acertou de primeira");
    }
    else{
        if(num > s){
            printf("Errou! Chute um numero menor...");
        }
        if(num < s){
            printf("Errou! Chute um numero maior...");
        }
        printf("Tente denovo: ");
        scanf("%d", &num);

        if(num != s){
            if(num > s){
                printf("Errou! Chute um numero menor...");
            }
            if(num < s){
                printf("Errou! Chute um numero maior...");
            }
            printf("Tente denovo: ");
            scanf("%d", &num);
            if(num == s){
                printf("Acertou, na terceira tentativa...");
            }
            else {
                printf("Errou as tres tentativas...");
            }
        }
        else {
            printf("Acertou, na segunda tentativa...");
        }
    }
    return 0;
}