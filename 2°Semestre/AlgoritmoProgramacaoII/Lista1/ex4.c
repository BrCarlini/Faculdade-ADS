#include <stdio.h>

int main(void) {
/*
e) Efetuar o cálculo e a apresentação do valor de uma prestação em atraso, utilizando a fórmula PRESTAÇÃO <--- VALOR + (VALOR * TAXA/100) * TEMPO
*/

  double prestacao, valor, taxa, tempo;

  printf("Informe o valor: ");
  scanf("%lf", &valor);

  printf("Informe a taxa cobrada por dia: ");
  scanf("%lf", &taxa);

  printf("Informe o tempo de atraso em dias: ");
  scanf("%lf", &tempo);

  prestacao = valor + (valor * taxa / 100) * tempo;

  printf("Valor da prestacao: %.2lf", prestacao);
  
  return 0;
}