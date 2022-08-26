#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

/*
3. Faça um programa estruturado para ler a base e altura de um triângulo e calcular o valor da área.
Crie funções de leitura, funções de cálculo e void de saída. Coloque um menu.
*/

double base;

double altura;

int main()
{
    setlocale(LC_ALL, "Portuguese");
 
    while (true)
    {
        int menu;

        printf("1 - Para Calcular a Area de um Triangulo.\n2 - Para Sair.\n>>> ");
        scanf("%d", &menu);

        if(menu == 2){
            printf("Programa Encerrado.");
            break;
        }

        lerDados();

        calcular(base, altura);
        
    }
    
    return 0;
}

lerDados(){
    
    printf("Informe a Base do Triangulo: ");
    scanf("%lf", &base);

    printf("Informe a Altura do Triangulo: ");
    scanf("%lf", &altura);
}

calcular(double b, double h){
    double a = b * h / 2;

    printf("========================================\n");
    printf("Base: %.2lf\nAltura: %.2lf\nArea: %.2lf\n", b, h, a);
    printf("========================================\n");
}
