#include <stdio.h>
/*Escreva um programa que pede para o usuário digitar um inteiro e imprime apenas um número: 0 ou 1.
Imprime 0 se o inteiro digitado for par e imprime 1 caso contrário. Pense no que significa “ser par” em termos das operações aritméticas básicas vistas em aula. Você só pode usar o que foi visto em aula.*/

int main(void)
{   int numero, operacao;
    
    printf("Insira um numero: ");
    scanf("%d", &numero);

    operacao = numero % 2;
    printf("1 para [impar] ou 0 para [par]:\nResultado -> %d", operacao);
    return 0;
}
