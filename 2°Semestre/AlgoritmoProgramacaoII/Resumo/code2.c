#include "stdio.h" // printf, scanf
#include "stdlib.h" // system
#include "locale.h" // setlocale
#define pi 3.14 // cria constante pi com #define

int main( void ) 
{
    system("clear");
    setlocale(LC_ALL, "Portuguese");
    
    // double const pi = 3.14;
    double resultado; // cria a variável resultado
    resultado = pi * 10; // faz o cálculo

    printf("Resultado %.3f", resultado);
    printf("\n");

    system("sleep 3");
    return 0; 
}
