#include <stdio.h>

/*
3 - Escreva um programa que solicita 5 números ao usuário, e para cada número digitado, informa se este é par ou ímpar.
*/

int main(void){
    int numUser, cont;

    cont = 1;

    while(cont <= 5){
        printf("Informe um numero: ");
        scanf("%d", &numUser);
        if (numUser % 2 == 0){
            printf("%d -> par\n", numUser);
        }
        else{
            printf("%d -> impar\n", numUser);
        }
        cont++;
    }
    printf("FIM");

    return 0;
}