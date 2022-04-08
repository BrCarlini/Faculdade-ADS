#include <stdio.h>
// Escreva um programa que pede para o usuário digitar as duas dimensões de um retângulo e imprime o perímetro e a área desse retângulo. O programa deve imprimir ambas as respostas em uma única linha.

int main(void)
{   float altura, base, area, perimetro;
    
    printf("Informe a altura do retangulo: ");
    scanf("%f", &altura);

    printf("Informe a base do retangulo: ");
    scanf("%f", &base);

    area = base * altura;
    perimetro = (2 * base) + (2 * altura);

    printf("Valor da area: %.1f; Valor do perimetro: %.1f", area, perimetro);
    
    return 0;
}

