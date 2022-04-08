#include <stdio.h>

/*
4 - Escreva um programa que solicita 10 números e ao final exibe a soma de todos eles.
*/

int main(void){
    int numUser, acumulador, contador;

    contador = 1;
    acumulador = 0;

    printf("Informe um numero 10 vezes:\n");

    while(contador <= 10){
        printf(">>> ");
        scanf("%d\n", &numUser);
        
        acumulador += numUser;    
        contador++;

    }

    printf("====================================================\n");
    printf("Soma de todos os numeros inseridos: %d", acumulador);
    return 0;
}