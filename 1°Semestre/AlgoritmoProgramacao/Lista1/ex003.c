#include <stdio.h>
//Crie um programa que calcula a área de uma circunferência, solicitando que o usuário digite apenas a medida do raio da mesma.

int main(void)
{   float pi, raio, calc;
    pi = 3.14;

    printf("Informe a medida do raio: ");
    scanf("%f", &raio);

    calc = pi * (raio * raio);

    printf("O calculo da circunferencia: %.2f", calc);
    
    return 0;
}
