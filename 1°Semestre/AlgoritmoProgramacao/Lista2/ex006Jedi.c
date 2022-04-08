#include <stdio.h>

/* Desafio Jedi Master
6. Escreva um programa que converta um intervalo de tempo dado em segundos, em: horas, minutos e segundos. 
(Por exemplo, se o tempo dado for 3 850 segundos, o programa deve fornecer 1 h 4 min 10 s.)
*/

int main(void){
    int hr, min, seg;

    printf("----------- CONVERSOR DE SEGUNDOS PARA HORAS E MINUTOS -----------\n");

    printf("Informe o valor em segundos: ");
    scanf("%d", &seg);

    hr = seg / 3600;
    min = (seg % 3600) / 60;
    seg = (seg % 3600) % 60;

    printf("%d hr; %d min; %d seg;", hr, min, seg);

    return 0;
}