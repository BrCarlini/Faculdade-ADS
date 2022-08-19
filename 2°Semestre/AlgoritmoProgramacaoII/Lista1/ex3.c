#include <stdio.h>

int main(void) {
/*
d) Efetuar o cálculo da quantidade de litros de combustível gasta em  uma viagem, utilizando um automóvel que faz 12 km por litro.
Para obter cálculo, o usuário deve fornecer o tempo gasto (TEMPO) e a velocidade média(VELOCIDADE) durante a viagem.
Desta forma, será possível obter a distância percorrida com a fórmula DISTANCIA <--- TEMPO * VELOCIDADE. 
Possuindo o valor da distância, basta calcula a quantidade de litros de combustivel utilizada na viagem com a fórmula LITROS_USADOS <--- DISTANCIA / 12. 
Ao final, o programa deve apresentar os valores da velocidade média(VELOCIDADE), tempo gasto na viagem(TEMPO), a distância percorrida(DISTANCIA) e a quantidade de litros(LITROS_USADOS) utilizada na viagem.
*/
  
  double tempo, velocidade;

  printf("Informe o tempo gasto: ");
  scanf("%lf", &tempo);
  
  printf("Informe a velocidade media percorrida: ");
  scanf("%lf", &velocidade);

  double distancia = tempo * velocidade;

  double litros_usados = distancia / 12;

  printf("Velocidade media: %.2lf\n", velocidade);
  printf("Tempo gasto: %.2lf\n", tempo);
  printf("Distancia percorrida: %.2lf\n", distancia);
  printf("Quantidade de litros: %.2lf", litros_usados);
  
  return 0;
}