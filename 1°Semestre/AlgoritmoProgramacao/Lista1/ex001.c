#include <stdio.h>
//Escreva um algoritmo para calcular o consumo médio de um automóvel (medido em km/l), dado que são conhecidos a distância total percorrida e o volume de combustível consumido para percorrê-la (medido em litros)

int main(void)
{   float km, gasolina, MediaLitros;

    printf("Informe o KM: ");
    scanf("%f", &km);
    printf("Informe a quantidade de litros de Gasolina: ");
    scanf("%f", &gasolina);

    MediaLitros = km / gasolina;

    printf("Consumo total de Gasolina:  %.2f\n", gasolina);
    printf("Total de KM rodado: %.2f\n", km);
    printf("Consumo medio de KM/l: %.2f\n", MediaLitros);

    return 0;
}



