#include <stdio.h>

int main(void)
{
    /*
    a)
    Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit. A fórmula de conversão é F ← (9 * C + 160) / 5, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius
    */
   double c, f;

   printf("Informe o valor em Celsius: ");
   scanf("%lf", &c);

   f = (9 * c + 160) / 5;

   printf("Valor em Celcius: %5.2f\n", c);
   printf("Valor em Celcius convertido em Fahrenheit: %5.2f", f);


    return 0;
}
