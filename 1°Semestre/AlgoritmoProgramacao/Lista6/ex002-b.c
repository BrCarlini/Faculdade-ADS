/*
2b - Faça um aprimoramente do programa anterior. Desta vez, seu programa deverá dar dicas, dizendo se o numero sorteado é maior ou menor, e permitir um novo palpite do usuário, ATÉ ELE ACERTAR. Mostrar quantas tentativas foram efetuadas (ele não irá sortear o número novamente).

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(void){

    int numAleat, numUser;
    int tentativas = 0;

    srand(time(NULL));
    numAleat = rand() % 10 + 1;
    printf("%d", numAleat);


    

    while(true){
        printf("==============================\n");
        printf("Informe um numero de 1 a 10: ");
        scanf("%d", &numUser);
        tentativas++;


        if(numAleat == numUser){
            printf("==============================\n");
            printf("Numero gerado pela maquina: %d\n", numAleat);
            printf("ACERTOU, os numeros sao iguais.\nTentativas efetuadas: %d", tentativas);
            break;
        }
        else{
            if(numAleat > numUser){
                printf("DIGITE UM NUMERO MAIOR.\n");
            }
            
            if(numAleat < numUser){
                printf("DIGITE UM NUMERO MENOR\n");
            }
        }



    }



    return 0;
}