#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* 5 - Escreva um programa que joga par ou ímpar com o usuário. */

int main(void){
    int sort, numUser, opcao, operacao;

    // Gera um numero aleatorio de 0 a 10;
    srand(time(NULL));
    sort = rand() % 11;
    //printf("%d\n", sort);

    printf("============== JOGO PAR OU IMPAR ==============\n");

    //Pega o número escolhido pelo Usuario;
    printf("Digite um numero de 0 a 10: ");
    scanf("%d", &numUser);

    // Pega a Escolha do Usaurio pelo par ou ímpar;
    printf("Escolha par ou impar: (1)PAR ou 2(IMPAR): ");
    scanf("%d", &opcao);

    // Operação para descobrir a quantidade de "dedos" colocados no jogo;
    operacao = sort + numUser;
    printf("Total de 'dedos': %d\n", operacao);


    // Verificando se o total de dedos da par ou ímpar
    if(operacao % 2 == 0){
        printf("Deu par\n");
        // Verificando quem venceu
        if(opcao == 1){
            printf("Voce venceu\n");
        }
        else{
            printf("Maquina vendeu");
        }
    }
    else {
        printf("Deu impar\n");
        if(opcao == 2){
            printf("Voce venceu");
        }
        else{
            printf("Maquina venceu");
        }
    }


    return 0;
}