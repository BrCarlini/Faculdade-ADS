/*
3 - Escreva um programa que solicita a altura de 5 atletas. Ao final da entrada de dados, informe A ALTURA do atleta mais alto. 
*/

#include <stdio.h>

int main()
{   
    float altura, maisAlto = 0;

    for(int i = 1; i <= 5; i++){
        printf("Informe a ALTURA de 5 atletas: ");
        scanf("%f", &altura);
        
        if(altura > maisAlto){
            maisAlto = altura;
        }

    }

    printf("O mais ALTO mede: %.2f", maisAlto);


    return 0;
}
