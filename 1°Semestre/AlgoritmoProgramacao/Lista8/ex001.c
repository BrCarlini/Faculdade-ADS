/*
1 - Escreva uma função chamada MAX( ) que recebe dois números inteiros e retorna o maior deles. 
*/

#include <stdio.h>

int max(int num1, int num2){
    int resultado;

    if(num1 > num2){
        resultado = num1;
        
    }
    else{
        resultado = num2;
    }

    return resultado;
}

int main(void){
    int maior = max(111, 200);
    printf("O maior eh %d", maior);

    return 0;
}