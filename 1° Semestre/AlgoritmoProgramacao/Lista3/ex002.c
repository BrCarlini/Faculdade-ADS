#include <stdio.h>

/* 2 - Escreva um programa que solicita um numero que exibe a mensagem "SENAC" se este número for 13, 26, 42 ou 70. */

int main(void){
  float num;

  printf("Insira um numero: ");
  scanf("%f", &num);

  if(num == 13 || num == 26 || num == 42 || num == 70){
    printf("SENAC");
  }
  else{
    printf("Numero diferente de 13, 26, 42, 70");
  }
  return 0;
}