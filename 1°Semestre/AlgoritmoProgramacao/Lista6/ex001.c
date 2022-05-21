/*
1 - Solicite um número e então diga se este é um número perfeito.
*/

#include <stdio.h>

int main()
{
    int num;
    int acum = 0;

    printf("Informe um numero na qual gostaria de saber se ele eh perfeito: ");
    scanf("%d", &num);


    for(int i = 1; i < num; i++){
        if(num % i == 0){
            acum += i;
        }
    }

    if(acum == num){
        printf("O Numero informado: %d\nEH PERFEITO!!", num);
    }else{
        printf("O Numero informado: %d\nNAO EH PERFEITO!!", num);
    }


    //printf("Numero informado: %d\nNumero acummulado: %d", num, acum);


    return 0;
}
