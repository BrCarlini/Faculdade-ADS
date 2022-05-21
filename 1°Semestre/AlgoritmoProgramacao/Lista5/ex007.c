/*
7 - Solicite que o usuário digite um número entre 10 e 20. Se for digitado um numero inválido, peça novamente, até que ele digite um número correto.
*/

#include <stdio.h>
#include <stdbool.h>


int main()
{
    
    while(true){
        int num;

        printf("Digite um numero entre 10 e 20: ");
        scanf("%d", &num);

        if (num >= 10 && num <= 20)
        {
            printf("Esta entre 10 e 20!\nNumero: %d.", num);
            break;
        }else{
            printf("Valor invalido!!!\n");
        }
        
    }

    return 0;
}
