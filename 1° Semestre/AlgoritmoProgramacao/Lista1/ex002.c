#include <stdio.h>
//Em uma festa, homens pagam 20 reais de entrada e as mulheres pagam 17. Crie um programa que pergunta quantos homens e quantas mulheres participaram da festa e calcula o valor total arrecadado com as entradas.

int main(void)
{   int quant_homens, quant_mulheres, valor_arrecadado;
    
    printf("Informe a quantidades de homens: ");
    scanf("%d", &quant_homens);
    
    printf("Informe a quantidades de mulheres: ");
    scanf("%d", &quant_mulheres);

    valor_arrecadado = (quant_homens * 20) + (quant_mulheres * 17);

    printf("%d homens pagaram R$20 de entrada\n", quant_homens);
    printf("%d mulheres pagaram R$17 de entrada\n", quant_mulheres);
    printf("O valor total arrecadado foi de R$%d\n", valor_arrecadado);
    return 0;
}
