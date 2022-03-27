#include <stdio.h>

// Fazer um quiz com três questões, e informar quantas ele acertou;

int main(void){
  int a, b, c, cont;

  cont = 0;

  printf("============== QUIZ ==============\n");
  printf("Palmeiras tem quantos mundiais ?\n");
  printf("Opcoes: \n1 -> 0\n2 -> 1\n3 -> 3\n>>> ");
  scanf("%d", &a);

  if(a == 1){
    printf("Acertou! Parabens\n");
    cont++;
  }
  
  printf("------------------------------------------------------------\n");
  printf("O apelido carinhoso Trikas, se refere a qual time Paulista ?\n");
  printf("Opcoes: \n1 -> Santos\n2 -> Sao Paulo\n3 -> Palmeiras\n>>> ");
  scanf("%d", &b);

  if(b == 2){
    printf("Acertou! Parabens\n");
    cont++;
  }

  printf("------------------------------------------------------------\n");
  printf("Qual time eh o maior Campeao da Champions League ?\n");
  printf("Opcoes: \n1 -> Milan\n2 -> Barcelona\n3 -> Real Madrid\n>>> ");
  scanf("%d", &c);

  if(c == 3){
    printf("Acertou! Parabens\n");
    cont++;
  }
  
  printf("Voce acertou %d vezes", cont);

  
  return 0;
}