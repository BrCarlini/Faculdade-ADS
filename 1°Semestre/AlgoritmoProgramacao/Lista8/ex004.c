/* 4 - Escreva uma função que recebe um valor float de temperatura em Celsius, e fará a conversão da temperatura informada de Celsius para Fahrenheit. */

#include <stdio.h>

float ConverTemperatura(){
    float op, valor;

    printf("Informe o grau Celsius: ");
    scanf("%f", &valor);
    op = (valor * 9 / 5) + 32;
    printf("%.1f", op);
}



int main(void){
    ConverTemperatura();
    return 0;
}