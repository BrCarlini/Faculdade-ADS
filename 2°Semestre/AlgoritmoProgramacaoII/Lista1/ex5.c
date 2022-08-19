#include <stdio.h>

int main(void){

  /*
  h) Elaborar um programa que calcule e apresente o volume de uma caixa     
  retangular, por meio da fórmula VOLUME <--- COMPRIMENTO * LARGURA * ALTURA
  */

  double volume, comprimento, largura, altura;

  printf("Informe o comprimento: ");
  scanf("%lf", &comprimento);

  printf("Informe a largura: ");
  scanf("%lf", &largura);
  
  printf("Informe a altura: ");
  scanf("%lf", &altura);

  volume = comprimento * largura * altura;

  printf("Volume: %.2f", volume);

  return 0;
}