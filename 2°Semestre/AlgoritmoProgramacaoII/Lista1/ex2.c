#include <stdio.h>

int main(void)
{
    /*
    c) Calcular e apresentar o valor do volume de uma lata de óleo, utilizando a fórmula:
    Volume <- π * Raio² * Altura
    */
    
    double raio, altura, volume;
    printf("Informe o raio: ");
    scanf("%lf", &raio);

    printf("Informe a altura: ");
    scanf("%lf", &altura);

    volume = 3,1415 * (raio * raio) * altura;

    printf("Volume: %5.2f", volume);

    return 0;
}
