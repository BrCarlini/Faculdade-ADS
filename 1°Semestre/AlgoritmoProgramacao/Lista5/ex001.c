#include <stdio.h>

/*
1 - Escreva um programa que exibe o quadrado de todos os números de 1 a 20.
Ex:
1 - 1
2 - 4
3 - 9
4 - 16
...
20 - 400
*/

int main(void) {
  int cont = 1;
  
  while(cont <= 20){
    printf("%d - %d\n", cont, cont * cont);
    cont ++;
  }
  
  return 0;
}