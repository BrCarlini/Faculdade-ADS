/*
4a - Escreva um programa que solicita o código e a altura de 5 atletas. Ao final da entrada de dados, informe O CÓDIGO do atleta mais alto. 
*/

#include <stdio.h>

int main()
{
    float altura, maisAlto = 0;
    int codigoDoMaisAlto = 0;
    int codigo = 0;

    for(int i = 1; i <= 5; i++){
        
        printf("Informe a ALTURA de %do atletas: ", i);
        scanf("%f", &altura);

        printf("Informe o CODIGO do atleta: ");
        scanf("%d", &codigo);
        printf("========================================\n");

        if(altura > maisAlto){
            maisAlto = altura;
            codigoDoMaisAlto = codigo;
        }

    }

    printf("O codigo do MAIS ALTO eh: %d", codigoDoMaisAlto);

    return 0;
}
