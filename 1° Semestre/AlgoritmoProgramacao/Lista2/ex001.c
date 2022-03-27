#include <stdio.h>

/* 1. Faça um algoritmo que receba um número e mostre uma mensagem caso este número seja maior que 10. */

int main(void)
{   float num;
    
    printf("Digite qualquer numero: ");
    scanf("%f", &num);

    if(num > 10){
        printf("O numero digitado e %.2f", num);
    }

    return 0;
}