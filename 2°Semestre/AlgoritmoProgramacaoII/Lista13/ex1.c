#include <ctype.h>
#include <locale.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int total;
typedef struct LISTA LISTA;

struct LISTA {
 int cpfs;
 int rg;
 char nome[10][100];
 LISTA *prox;
};

LISTA *primeiroNo;
LISTA *ultimoNo;

bool vazia() { return (primeiroNo == NULL); }

void construtor() {
 primeiroNo = ultimoNo = NULL;
 total = 0;
 printf("\nLISTA Iniciada\n");
 system("sleep 2");
}

void inserirNo(int valor) {
 LISTA *novoNo = (LISTA *)malloc(sizeof(LISTA));
 if (novoNo == NULL) {
   printf("\nErro de alocação\n");
   system("sleep 2");
   return;
 }

 printf("Insira um nome:");
 gets();
 gets(novoNo->nome);

 int rg;

 printf("Insira um rg:");
 scanf("%i", &rg);

 novoNo->rg = rg;

 novoNo->cpfs = valor;
 novoNo->prox = NULL;
 total++;

 if (vazia() == true) {
   primeiroNo = novoNo;
   ultimoNo = novoNo;
 } else {
   ultimoNo->prox = novoNo;
 }
 ultimoNo = novoNo;
}

void removerNo() {
 LISTA *temp;
 temp = primeiroNo;

 if (!vazia()) {
   primeiroNo = temp->prox;
 }

 free(temp);
 total--;
}

void removerCpf() {
 LISTA *temp;
 LISTA *tempAnterior;
 LISTA *tempProxima;

 temp = primeiroNo;
 tempAnterior = temp;

 int cpf = 0, count = 0;

 printf("Digite o CPF para deletar: ");
 scanf("%i", &cpf);

 while (temp->cpfs != cpf) {
   tempAnterior = temp;
   temp = temp->prox;
   count++;
 }
 if (count > 1)
   tempAnterior->prox = temp->prox;
 else
   primeiroNo = temp->prox;

 free(temp);
 total--;
}

void printUser() {
 LISTA *temp;

 temp = primeiroNo;

 int cpf = 0, count = 0;

 printf("Digite o CPF para buscar: ");
 scanf("%i", &cpf);

 while (temp->cpfs != cpf) {
   temp = temp->prox;

   if (temp == NULL) {
     printf("Não encontrado");
     return;
   }

   count++;
 }

 printf("Nome: %s| ", temp->nome);
 printf("Rg: %i  | ", temp->rg);
 printf("CPF: %i", temp->cpfs);
}

void mostrar() {
 LISTA *temp;
 temp = primeiroNo;
 int i;
 while (temp != NULL) {
   printf("Nome: %s\n", temp->nome);
   printf("Rg: %i\n", temp->rg);
   printf("CPF: %i\n", temp->cpfs);
   temp = temp->prox;
   i++;
 }

 printf("\n");
 system("sleep 3");
 free(temp);
}

void destrutor() {
 LISTA *temp, *aux;
 temp = primeiroNo;

 while (temp != NULL) {
   aux = temp;
   temp = temp->prox;
   free(aux);
 }

 printf("\nLISTA destruída...\n");
 system("sleep 3");
}

int main() {
 int item, i, n = 0;
 ;
 int valor;
 char nome[30];
 do {
   system("clear");
   printf(
       "\nEscolha uma das opções:\n\n1 - Iniciar LISTA\n2 - Inserir elemento "
       "na LISTA\n3 - Remover ultimo elemento da LISTA\n4 - Exibir\n5 - "
       "Verificar se "
       "está vazia\n6 - Destruir LISTA\n7 - buscar por CPF\n8 - Remover por "
       "CPF\n9 - Sair\nSua escolha: ");
   scanf("%d", &item);
   switch (item) {
   case 1:
     construtor();
     break;
   case 2:
     printf("Insira um cpf: ");
     scanf("%d", &valor);
     inserirNo(valor);
     i++;
     break;
   case 3:
     removerNo();
     break;
   case 4:
     mostrar();
     break;
   case 5:
     if (vazia()) {
       printf("Está vazia");
     } else
       printf("N está vazia");
     break;
   case 6:
     destrutor();
     break;
   case 7:
     printUser();
     break;
   case 8:
     removerCpf();
     break;
   case 9:
     printf("Saindo...");
     system("sleep 3");
     break;
   default:
     printf("Não foram digitados valores válidos, tente novamente!\n");
     break;
   }
 } while (item != 9);
} 