#include <stdio.h>

/* 1 - Escreva um programa que solicita um número inteiro. Exiba uma mensagem de erro se o número informado estiver entre 15 e 25 ou entre 45 e 50 (inclusive) */

int main(void) {
  int num;
  
  printf("Insira uma numero inteiro: ");
  scanf("%d", &num);

  if(num >= 15 && num <= 25 || num >= 45 && num <= 50){
    printf("ERRO: O numero digitado (%d) esta entre 15 e 25 ou entre 45 e 50", num);
  }
  else{
    printf("OK: Numero digitado foi %d", num);
  }
  return 0;
}