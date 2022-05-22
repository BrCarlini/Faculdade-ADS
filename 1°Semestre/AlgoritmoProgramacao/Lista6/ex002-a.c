/*
2a - (já pode ter sido feito anteriormente) Adivinhe o número - Crie um programa que solicita um número ao usuário entre 1 e 10, sorteia um outro número dentro desta faixa de valores, e então diz se os dois números são iguais. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

    int numAleat, numUser;

    srand(time(NULL));
    numAleat = rand() % 10 + 1;


    printf("Informe um numero de 1 a 10: ");
    scanf("%d", &numUser);

    if(numAleat == numUser){
        printf("Numero gerado pela maquina: %d\n", numAleat);
        printf("ACERTOU, os numeros sao iguais");
    }
    else{
        printf("Numero gerado pela maquina: %d\n", numAleat);
        printf("ERROU, os numeros nao sao iguais");
    }



    return 0;
}
