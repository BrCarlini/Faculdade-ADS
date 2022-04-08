#include <stdio.h>

/*
2 - Escreva um programa que exibe qualquer tabuada completa. O programa deve perguntar ao usuário qual tabuada ele deseja visualizar, que irá responder digitando um número de 1 a 10.
*/

int main(void){
  int numUser, cont;

  printf("Informe qualquer tabuada: ");
  scanf("%d", &numUser);

  cont = 1;

  while(cont <= 10){
    printf("%d x %d = %d\n", numUser, cont, numUser * cont);
    cont++;
  }
  
  return 0;
}