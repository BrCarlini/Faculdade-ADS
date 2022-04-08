#include <stdio.h>

/* 2. Escrever um algoritmo que leia dois valores inteiro distintos e informe qual deles é o maior. */

int main(void)
{ int num1, num2;

  printf("Digite o Primeiro numero: ");
  scanf("%d", &num1);
  
  printf("Digite o Segundo numero: ");
  scanf("%d", &num2);

  if(num1 > num2){
    printf("O Primeiro numero eh maior.");
  }
  else{
    printf("O Segundo numero eh maior.");
  }
  
  return 0;
}