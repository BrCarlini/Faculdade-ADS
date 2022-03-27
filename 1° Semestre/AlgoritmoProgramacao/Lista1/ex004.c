#include <stdio.h>
//Escreva um programa que ajuda os alunos a calcularem as notas desta disciplina. O programa deve perguntar as notas da primeira e da segunda prova, calcular a média aritmética entre elas, e exibir na tela.

int main(void)
{   float p1, p2, media;
    
    printf("Informe a nota da Prova 1: ");
    scanf("%f", &p1);
    printf("Informe a nota da Prova 2: ");
    scanf("%f", &p2);

    media = (p1 + p2) / 2;
    printf("P1: %.2f; P2: %.2f\n", p1, p2);
    printf("Media: %.2f", media);

    return 0;
}
