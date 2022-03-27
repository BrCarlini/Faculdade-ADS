#include <stdio.h>

/* 4 - Escrever um algoritmo que leia três valores inteiros e verifique se eles podem ser as medidas dos lados de um triângulo. 
- Propriedade: o comprimento de cada lado de um triângulo é menor do que a soma dos comprimentos dos outros dois lados.
*/

int main(void){
  int a, b, c;

  printf("Insira o numero 1: ");
  scanf("%d", &a);
  
  printf("Insira o numero 2: ");
  scanf("%d", &b);
  
  printf("Insira o numero 3: ");
  scanf("%d", &c);
  
  if(a + b > c && a + c > b && b + c > a){
        printf("Os 3 lados formam um triangulo!\n");
  }
  else{
    printf("Nao pode formar um triangulo");
  }
  return 0;
}