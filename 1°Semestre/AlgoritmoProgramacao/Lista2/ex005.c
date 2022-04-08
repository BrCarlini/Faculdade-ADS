#include <stdio.h>

/* 5. Crie um programa que recebe um número inteiro e informa se este número é múltiplo de 10.*/

int main(void){
  int num;

  printf("Digite um numero: ");
  scanf("%d", &num);

  if(num % 10 == 0){
    printf("O numero %d eh multiplo de 10", num);
  }
  else{
    printf("O numero %d nao eh multiplo de 10", num);
  }

  
  return 0;
}