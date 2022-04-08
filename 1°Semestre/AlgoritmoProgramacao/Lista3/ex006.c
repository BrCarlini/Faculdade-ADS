#include <stdio.h>

/* 6 -  Incremente o exercício anterior, agora informando se este é também um triângulo retângulo. */

int main() {
  int a, b, c,      /* dados de entrada            */
      aux;          /* auxiliar para fazer a troca */

  printf("Digite tres numeros naturais: ");
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c); 

  /* coloca o maior dos numeros dados no a */
  if (b > a){
    aux = a;
    a = b;
    b = aux;
  }
  if (c > a){
    aux = a;
    a = c;
    c = aux;
  }
  
  /* verifica se b e c sao catetos de um triangulo com a de hipotenusa */
  if (a * a == b * b + c * c)
    printf("O triangulo eh retangulo\n");
  else 
    printf("O triangulo nao eh retangulo\n");
  
  return 0;
}