/*
2 - Escreva uma função chamada ParOuImpar, que recebe um número inteiro e retorna 10 se for par ou 30 se for ímpar.
*/

#include <stdio.h>

int ParOuImpar(int num1){

    if(num1 % 2 == 0){
        return 10;
    }
    else{
        return 30;
    }
}

int main(void){
    int result, valor;

    printf("Digite um numero: ");
    scanf("%d", &valor);

    result = ParOuImpar(valor);
    printf("-> 10 = PAR\n-> 30 = IMPAR\n>>> %d", result);

    return 0;
}