#include <stdio.h>
//Fazer  um  algoritmo  para  ler  os  valores  dos  coeficientes  A,  B  e  C  de  uma  equação quadrática. Calcular e imprimir o valor do discriminante (delta).     Delta = B²– 4AC

int main(void)
{   float a, b, c, delta;

    printf("Informe o coeficiente A: ");
    scanf("%f", &a);
    printf("Informe o coeficiente B: ");
    scanf("%f", &b);
    printf("Informe o coeficiente C: ");
    scanf("%f", &c);

    printf("A: %.1f;\nB: %.1f;\nC: %.1f;\n", a, b, c);

    delta = (b * b) - 4 * a * c;
    printf("Valor de Delta: %.1f\n", delta);

    return 0;
}
