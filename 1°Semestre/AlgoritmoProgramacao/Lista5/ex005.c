#include <stdio.h>

/*
5 - Escreva um programa que exibe a soma dos números de 1 a 100
*/

int main(void){
    int contador, acumulador;

    contador = 1;
    acumulador = 0;

    while(contador <= 100){
        acumulador += contador;

        printf("%d\n", acumulador);
        
        contador++;
    }

    return 0;
}