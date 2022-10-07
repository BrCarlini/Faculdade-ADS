#include "locale.h"
#include "math.h"
#include "stdlib.h"
#include "string.h"
#include <stdio.h>

// Variaveis globais para facilitar gerenciamento de codigo
float lista[10];
char names[10][100];

// Ordenamento
void numberGrowing(int size) {
  for (int i = 0; i <= (size - 2); i++) {
    for (int j = i; j <= (size - 1); j++) {
      if (lista[i] > lista[j]) {
        int aux = lista[i];
        lista[i] = lista[j];
        lista[j] = aux;
      }
    }
  }
}
void numberDecreasing(int size) {
  for (int i = 0; i < (size - 2); i++) {
    for (int j = i; j < (size - 1); j++) {
      if (lista[i] < lista[j]) {
        int aux = lista[i];
        lista[i] = lista[j];
        lista[j] = aux;
      }
    }
  }
}

// ler e imprimir valores numericos
void printNumber(int itens) {
  for (int i = 0; i < itens; i++) {
    printf("Posição %i: %.2f\n", i + 1, lista[i]);
  }
}
void setNewValueNumber(int position) {
  printf("Digite o valor para ser guardado:");
  scanf("%f", &lista[position]);
  return;
}

// Ler e imprimir nomes
void printNames(int itens) {
  for (int i = 0; i < itens; i++) {
    printf("Posição %i: %s\n", i + 1, names[i]);
  }
}
void setNewValueName(int position) {
  printf("Digite o nome para ser guardado:");
  
  scanf("%f", &names[position]);
  return;
}

// Nomes em ordem alfabética
void namesAlphabetical(int size) {
  for (int i = 0; i <= (size - 2); i++) {
    for (int j = i; j <= (size - 1); j++) {
      if (names[i][0] > names[j][0]) {
        char aux[1][100];
        
        for(int c = 0; c < 100; c++){
          aux[0][c] = names[i][c];
        }

        for(int c = 0; c < 100; c++){
          names[i][c] = names[j][c];
        }
        
        for(int c = 0; c < 100; c++){
          names[j][c] = aux[0][c];
        }
      }
    }
  }
}

// funcao central
void controladora() {
  int escolha;
  int positionReadNumber = 0, positionReadNomes = 0;
  int isExibir;

  while (escolha != 6) {
    printf("\n---------------------------------\n");
    printf("1 - Ler valores\n2 - Numeros Decrescente\n3 - "
           "Numeros Crescente\n4 - Ler nomes\n5 - Nomes em ordem alfabética\n6 "
           "- Para sair do menu");
    printf("\n---------------------------------\n");
    scanf("%i", &escolha);
    switch (escolha) {
      printf("\n---------------------------------\n");
    case 1:
      setNewValueNumber(positionReadNumber);
      positionReadNumber++;
      break;
    case 2:
      numberDecreasing(positionReadNumber);
      printNumber(positionReadNumber);
      break;
    case 3:
      numberGrowing(positionReadNumber);
      printNumber(positionReadNumber);
      break;
    case 4:
      setNewValueName(positionReadNomes);
      positionReadNomes++;
      break;
    case 5:
      namesAlphabetical(positionReadNomes);
      printNames(positionReadNomes);
      break;
    }
  }

   exit(EXIT_SUCCESS);
  return;
}
int main() {
  controladora();
  return 0;
}