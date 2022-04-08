#include <stdio.h>

/* 3. Altere o exercício anterior de forma que ele informe também se os números são iguais. */

int main(void)
{ int num1, num2;

  printf("Digite o Primeiro numero: ");
  scanf("%d", &num1);
  
  printf("Digite o Segundo numero: ");
  scanf("%d", &num2);

  if(num1 > num2){
    printf("O Primeiro numero eh maior.");
  }
  
  if (num2 > num1){
    printf("O Segundo numero eh maior.");
  }
  
  if(num1 == num2){
    printf("Os numeros sao iguais.");
  }
    
  
  return 0;
}
