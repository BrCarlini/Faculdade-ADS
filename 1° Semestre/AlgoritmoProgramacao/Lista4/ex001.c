#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/* 1 - Sorteie um número de 1 a 100 e informe se o número sorteado é par ou ímpar. */

int main(void) {
  int n;

  srand(time(NULL));
  n = rand() % 100;

  if (n % 2 == 0){
      printf("O numero %d eh par", n);
  }
  else{
      printf("O numero %d eh impar", n);
  }
  
  
  return 0;
}