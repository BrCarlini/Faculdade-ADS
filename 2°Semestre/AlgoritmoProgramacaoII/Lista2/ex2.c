#include <stdio.h>
#include <stdbool.h>

/*
2. Faça um programa estruturado com menu para o seguinte caso: Um capital (Valor Capital) aplicado a
juros (JUROS) simples durante 2 anos (Período), sob taxa de juros de 5% ao mês, gerou um montante
(Montante) de R$ 26.950,00. Determine o valor do capital aplicado. (Verifique na internet a fórmula do
juros simples, sugestão site Brasil Escola)

*/

int main()
{
    double op, resultado;

    while (true)
    {
        int menu;
        printf("1 - Exiba o Capital Aplicado.\n2 - Sair\n>>> ");
        scanf("%d", &menu);

        if(menu == 2){
            printf("Programa encerrado.");
            break;
        }

        calcular();

        
    }
    
    return 0;
}

calcular(){
    double op, resultado;
    op = 1 + 0.05 * 24;
    resultado = 26950.00 / op;

    printf("===========================================");
    printf("\nCapital aplicado: R$%.2lf\n", resultado);
    printf("===========================================\n");
}
