#include <stdio.h>
#include <stdbool.h>

double c = 0.0;
double calculo = 0.0;

int main(void)
{
    /*
    1. Faça um programa estruturado para ler o comprimento, calcular o diâmetro, calcular o raio e finalmente
    calcular a área de um círculo. Crie um menu de controle com as opções 1 ler, 2 calcular, 3 exibir e 4
    sair. Crie as sub-rotinas de leitura, cálculo e de exibição.
  */


    
    
    while(true){
        int menu;
        
        

        printf("\nMenu:\n1 - Ler\n2 - Calcular\n3 - Exibir\n4 - Sair\n>>> ");
        scanf("%d", &menu);

        

        if(menu == 4){
            printf("Programa encerrado");
            break;
        }

        switch(menu)
        {
        case 1:
            c = comprimento();
            break;
        
        case 2:
            calculo = calcular(c);
            break;
        
        case 3:
            exibir();
            break;
        
        default:
            printf("Valor Invalido");
            break;
        }

    }
}


double compr;
comprimento(void){
    
    printf("Informe o Comprimento: ");
    scanf("%lf", &compr);

    //printf("%lf", compr);
    return compr;   
}

double d, r, a;
calcular(double cp){
    const double pi = 3.1415;

    d = cp / pi;

    r = d / 2;

    a = pi * (r * r);


    //printf("%lf", a);
    return a;
}

exibir(){
    
    printf("============================\n");
    printf("Comprimento informado: %.2lf\n", compr);
    printf("Valor do Diametro: %.2lf\n", d);
    printf("Valor do Raio: %.2lf\n", r);
    printf("Resultado (Area): %.2lf", a);
    printf("\n============================");
    return;
}
