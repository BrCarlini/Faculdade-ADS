#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    /*
    1. Faça um programa estruturado para ler o comprimento, calcular o diâmetro, calcular o raio e finalmente
    calcular a área de um círculo. Crie um menu de controle com as opções 1 ler, 2 calcular, 3 exibir e 4
    sair. Crie as sub-rotinas de leitura, cálculo e de exibição.
  */



    while(true){
        int menu;

        printf("Menu:\n1 - Ler\n2 - Calcular\n3 - Exibir\n4 - Sair\n>>> ");
        scanf("%d", &menu);

        if(menu == 4){
            printf("Programa encerrado");
            break;
        }

        switch(menu)
        {
        case 1:
            comprimento();
            break;
        
        case 2:
            //calcular();
            break;
        
        case 3:
            //exibir();
            break;
        
        default:
            //printf("Valor Invalido");
            break;
        }

    }

    
}


double comprimento(){
    double compr;
    printf("Informe o comprimento: ");
    scanf("%lf", &compr);

    return compr;
}
