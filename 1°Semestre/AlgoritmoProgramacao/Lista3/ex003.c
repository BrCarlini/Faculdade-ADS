#include <stdio.h>

/* 3 - Faça um algoritmo que receba um número e mostre uma mensagem caso este número seja maior que 80, menor  que 25 ou igual a 40. */

int main(void){
  float num;

  printf("Insira um numero: ");
  scanf("%f", &num);

  if(num > 80 || num < 25 || num == 40){
    printf("Numero maior que 80 ou menor que 25 ou igual 40.");
  }
  else{
    printf("Nao entra no 'if' ");
  }
  return 0;
}