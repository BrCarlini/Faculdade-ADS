/*
4a - Escreva um programa que solicita o código e a altura de 5 atletas. Ao final da entrada de dados, informe O CÓDIGO do atleta mais alto. 
*/

#include <stdio.h>

int main()
{
    float altura = 0;
    int codigo = 0;

    for(int i = 1; i <= 5; i++){
        printf("Informe a ALTURA de 5 atletas: ");
        scanf("%f", &altura);

        printf("");
    }

    return 0;
}
