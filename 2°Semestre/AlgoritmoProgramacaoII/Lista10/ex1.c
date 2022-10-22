#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Dentro do mesmo node tenho os dois exerc: I e II
// controlo o proximo e o anterior dentro do struct Node
typedef struct Node node;
struct Node {
  int position;
  node *nextNode;
  node *previousNode;
};

int count = 0;
node *nodeStart;
node *nodeEnd;

node * getLatestPosition(){
  node *temp;
  temp = nodeStart;
  bool found = false; 
  
  while (!found) {
    if(temp->nextNode)
      temp = temp->nextNode;
    else 
      found = true;
  }

  return temp;
}

void populationNodes() {

  int qtd = 0;

  printf("Digite a quantidade de ponteiros:");
  scanf("%d", &qtd); 

  
  for(int i = 0; i < qtd; i++){
    node *nodeNew = (node *) malloc(sizeof(node));

    printf("%d\n", count);
     count++;
    if (count == 1) {
      nodeNew->position = count;
      nodeStart = nodeNew;
      nodeEnd = nodeNew;
    } else {
      nodeNew->position = count;
      nodeNew->previousNode = getLatestPosition();
      nodeEnd->nextNode = nodeNew;    
     
      nodeEnd = nodeNew;
    }
  }  
  
  return;
}

void showAll() {
  node *temp;
  temp = nodeStart;
  while (temp != NULL) {
    printf("Anterior: %p\nPonteiro: %p\nPosição : %i\nProximo : %p", temp->previousNode, temp, temp->position, 
      temp->nextNode);
    printf("\n====================\n");
    temp = temp->nextNode;
  }
  return;
}

// I - A e B estão dentro dessa função
void findAndShow() {
  int position = 0;
  node *temp;
  temp = nodeStart;

  printf("Digite a posição que deseja buscar:");
  scanf("%i", &position);
  
  while (temp->position != position && temp->nextNode != NULL) {
    temp = temp->nextNode;
  }
  
  if(temp->position == position)
    printf("A posição é: %i e o endereço da proxima é: %p\n", temp->position,
           &temp->nextNode);
  else 
    printf("Não foi encontrada\n");

  return;
}

void destroy() {
  node *temp;
  temp = nodeStart;

  while (temp->nextNode != NULL) {
    free(temp);
    temp = temp->nextNode;
  }
  return;
}

void menu() {
  int escolha;

  do {
    system("clear");
    printf("Digite sua escolha!\n");
    printf("[1] Popular ponteiros\n");
    printf("[2] Buscar um ponteiro\n");
    printf("[3] Exibir\n");
    printf("[4] Sair\n");    
    
    printf("Escolha: ");
    scanf("%d", &escolha);
    
    system("clear");

    switch (escolha) {
    case 1:
      populationNodes();
      break;
    case 2:
      findAndShow();
      break;
    case 3:
      showAll();
      break;
    default:
      printf("Escolha uma opção válida\n\n");
      break;
    }
  if (escolha == 3 || escolha == 2){
    system("sleep 5");
  }
  system("clear");
  } while (escolha != 4);
  destroy();
}

int main(void) {
  menu();
  return 0;
}