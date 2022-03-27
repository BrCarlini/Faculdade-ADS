#include <stdio.h>

/* 4. Solicite que o usuário digite um número. Informe então se este número é par ou ímpar. */

int main(void){
  int num;

  printf("Digite um numero: ");
  scanf("%d", &num);

  if (num % 2 == 0){
    printf("O numero %d e par", num);
  }
  else{
    printf("O numero %d e impar.", num);
  }

  return 0;
}