/*
3 - Escreva uma função chamada EhPrimo, que recebe um número inteiro e retorna 1 se ele for um número primo, ou zero caso contrário.
*/

#include <stdio.h>

int EhPrimo(int num1){
    int result, i, cont=0;

    for(int i = 1; i <= num1; i++)
        if (num1 % i == 0){
            cont++;
        }
    if (cont == 2){
        return 1;
    }
    else{
        return 0;
    }
    
        
}

int main(void){
    int valor, result;

    printf("Informe um numero: ");
    scanf("%d", &valor);

    result = EhPrimo(valor);
    printf("1 = Eh um numero primo\n0 = Nao eh Primo\n>>> %d", result);
    
    return 0;
}
