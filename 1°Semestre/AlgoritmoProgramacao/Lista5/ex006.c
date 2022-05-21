/*
6 - Escreva um programa que solicita um número ao usuário, e então exibe todos os seus divisores.
Ex: Se informado 12, deve exibir:
1
2
3
4
6
12
*/



#include <stdio.h>

int main()
{
    int num;

    printf("Informe um numero para descobrir seus divisores: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++){
        if(num % i == 0){
            printf("Divisor do numero informado: %d\n", i); 
        }
    }

    return 0;
}
