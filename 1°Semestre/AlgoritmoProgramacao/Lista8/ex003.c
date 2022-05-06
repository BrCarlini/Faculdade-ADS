/*
3 - Escreva uma função chamada EhPrimo, que recebe um número inteiro e retorna 1 se ele for um número primo, ou zero caso contrário.
*/

#include <stdio.h>

int EhPrimo(num1){
    int result, i;

    for(i = 2; i <= num1 / 2; i++){
        if(num1 % 1 == 0);
    }
    
    return result;
}

int main(void){
    int valor, result;

    printf("Informe um numero: ");
    scanf("%d", &valor);

    result = EhPrimo(valor);
    printf("1 = Eh um numero primo\n0 = Nao eh Primo\n>>> %d", result);
    
    return 0;
}
